package com.nativeapptemplate.nativeapptemplatefree

import android.content.Intent
import android.graphics.Color
import android.nfc.NdefMessage
import android.nfc.NfcAdapter
import android.os.Build.VERSION.SDK_INT
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.SystemBarStyle
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.core.splashscreen.SplashScreen.Companion.installSplashScreen
import androidx.lifecycle.Lifecycle
import androidx.lifecycle.lifecycleScope
import androidx.lifecycle.repeatOnLifecycle
import com.nativeapptemplate.nativeapptemplatefree.MainActivityUiState.Loading
import com.nativeapptemplate.nativeapptemplatefree.MainActivityUiState.Success
import com.nativeapptemplate.nativeapptemplatefree.data.login.LoginRepository
import com.nativeapptemplate.nativeapptemplatefree.designsystem.theme.NatTheme
import com.nativeapptemplate.nativeapptemplatefree.model.DarkThemeConfig
import com.nativeapptemplate.nativeapptemplatefree.model.ItemTagInfoFromNdefMessage
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.NatApp
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.rememberNatAppState
import com.nativeapptemplate.nativeapptemplatefree.utils.NetworkMonitor
import com.nativeapptemplate.nativeapptemplatefree.utils.Utility
import kotlinx.coroutines.launch
import org.koin.android.ext.android.inject
import org.koin.androidx.viewmodel.ext.android.viewModel
import java.util.Date

class MainActivity : ComponentActivity() {
  val networkMonitor: NetworkMonitor by inject()
  val loginRepository: LoginRepository by inject()

  private val viewModel: MainActivityViewModel by viewModel()
  var uiState: MainActivityUiState by mutableStateOf(Loading)

  override fun onCreate(savedInstanceState: Bundle?) {
    val splashScreen = installSplashScreen()
    super.onCreate(savedInstanceState)

    viewModel.updateShouldNavigateToScanView(false)
    viewModel.updateShouldFetchItemTagForShowTagInfoScan(false)
    viewModel.updateShouldCompleteItemTagForCompleteScan(false)
    viewModel.initScanViewSelectedTabIndex()
    viewModel.initShowTagInfoScanResult()
    viewModel.initCompleteScanResult()

    // Update the uiState
    lifecycleScope.launch {
      lifecycle.repeatOnLifecycle(Lifecycle.State.STARTED) {
        viewModel.uiState.collect {
          uiState = it
        }
      }
    }

    // Keep the splash screen on-screen until the UI state is loaded.
    splashScreen.setKeepOnScreenCondition {
      when (uiState) {
        Loading -> true
        is Success -> false
      }
    }

    enableEdgeToEdge()

    setContent {
      val darkTheme = shouldUseDarkTheme(uiState)

      DisposableEffect(darkTheme) {
        enableEdgeToEdge(
          statusBarStyle = SystemBarStyle.auto(
            Color.TRANSPARENT,
            Color.TRANSPARENT,
          ) { darkTheme },
          navigationBarStyle = SystemBarStyle.auto(
            lightScrim,
            darkScrim,
          ) { darkTheme },
        )
        onDispose {}
      }

      val appState = rememberNatAppState(
        loginRepository = loginRepository,
        networkMonitor = networkMonitor,
      )

      NatTheme(
        darkTheme = darkTheme,
      ) {
        NatApp(appState)
      }
    }

    if (!uiState.isLoggedIn) return

    val intent = intent
    if (NfcAdapter.ACTION_NDEF_DISCOVERED == intent.action) {
      viewModel.updateShouldNavigateToScanView(false)

      val ndefMessage: NdefMessage?
      val rawMessages = if (SDK_INT >= 33) { // TIRAMISU
        intent.getParcelableArrayExtra(
          NfcAdapter.EXTRA_NDEF_MESSAGES,
          NdefMessage::class.java
        )
      }else{
        @Suppress("DEPRECATION")
        intent.getParcelableArrayExtra(NfcAdapter.EXTRA_NDEF_MESSAGES)
      }

      if (!rawMessages.isNullOrEmpty()) {
        ndefMessage = rawMessages[0] as NdefMessage

        val itemTagInfoFromNdefMessage = Utility.extractItemTagInfoFrom(
          context = this,
          ndefMessage = ndefMessage
        )

        updateItemTagInfoFromNdefMessage(itemTagInfoFromNdefMessage)
        viewModel.initScanViewSelectedTabIndex()
        viewModel.updateShouldNavigateToScanView(true)
      }
    }
  }

  override fun onNewIntent(intent: Intent) {
    super.onNewIntent(intent)

    if (!uiState.isLoggedIn) return

    if (NfcAdapter.ACTION_NDEF_DISCOVERED == intent.action) {
      viewModel.updateShouldNavigateToScanView(false)

      val ndefMessage: NdefMessage?
      val rawMessages = if (SDK_INT >= 33) { // TIRAMISU
        intent.getParcelableArrayExtra(
          NfcAdapter.EXTRA_NDEF_MESSAGES,
          NdefMessage::class.java
        )
      }else{
        @Suppress("DEPRECATION")
        intent.getParcelableArrayExtra(NfcAdapter.EXTRA_NDEF_MESSAGES)
      }

      if (!rawMessages.isNullOrEmpty()) {
        ndefMessage = rawMessages[0] as NdefMessage

        val itemTagInfoFromNdefMessage = Utility.extractItemTagInfoFrom(
          context = this,
          ndefMessage = ndefMessage
        )

        updateItemTagInfoFromNdefMessage(itemTagInfoFromNdefMessage)
        viewModel.initScanViewSelectedTabIndex()
        viewModel.updateShouldNavigateToScanView(true)
      }
    }
  }

  override fun onResume() {
    super.onResume()
    viewModel.updatePermissions()
  }

  private fun updateItemTagInfoFromNdefMessage(itemTagInfoFromNdefMessage: ItemTagInfoFromNdefMessage) {
    if (itemTagInfoFromNdefMessage.success) {
      itemTagInfoFromNdefMessage.scannedAt = Date().toInstant().toString()
    }

    viewModel.updateItemTagInfoFromNdefMessage(itemTagInfoFromNdefMessage)
    viewModel.updateShouldCompleteItemTagForCompleteScan(itemTagInfoFromNdefMessage.success)
  }
}

@Composable
private fun shouldUseDarkTheme(
  uiState: MainActivityUiState,
): Boolean = when (uiState) {
  Loading -> isSystemInDarkTheme()
  is Success -> when (uiState.userData.darkThemeConfig) {
    DarkThemeConfig.FOLLOW_SYSTEM -> isSystemInDarkTheme()
    DarkThemeConfig.LIGHT -> false
    DarkThemeConfig.DARK -> true
  }
}

private val lightScrim = Color.argb(0xe6, 0xFF, 0xFF, 0xFF)
private val darkScrim = Color.argb(0x80, 0x1b, 0x1b, 0x1b)
