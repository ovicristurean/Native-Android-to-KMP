package com.nativeapptemplate.nativeapptemplatefree.ui.settings

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.nativeapptemplate.nativeapptemplatefree.data.login.LoginRepository
import com.nativeapptemplate.nativeapptemplatefree.model.DarkThemeConfig
import kotlinx.coroutines.flow.SharingStarted.Companion.WhileSubscribed
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.flow.stateIn
import kotlinx.coroutines.launch

import kotlin.time.Duration.Companion.seconds

class DarkModeSettingsViewModel (
  private val loginRepository: LoginRepository,
) : ViewModel() {
  val darkModeSettingsUiState: StateFlow<DarkModeSettingsUiState> =
    loginRepository.userData
      .map { userData ->
        DarkModeSettingsUiState.Success(
          settings = UserEditableSettings(
            darkThemeConfig = userData.darkThemeConfig,
          ),
        )
      }
      .stateIn(
        scope = viewModelScope,
        started = WhileSubscribed(5.seconds.inWholeMilliseconds),
        initialValue = DarkModeSettingsUiState.Loading,
      )

  fun updateDarkThemeConfig(darkThemeConfig: DarkThemeConfig) {
    viewModelScope.launch {
      loginRepository.setDarkThemeConfig(darkThemeConfig)
    }
  }
}

/**
 * Represents the settings which the user can edit within the app.
 */
data class UserEditableSettings(
  val darkThemeConfig: DarkThemeConfig,
)

sealed interface DarkModeSettingsUiState {
  data object Loading : DarkModeSettingsUiState
  data class Success(val settings: UserEditableSettings) : DarkModeSettingsUiState
}
