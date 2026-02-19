package com.nativeapptemplate.nativeapptemplatefree.di

import androidx.datastore.core.DataStore
import androidx.datastore.core.DataStoreFactory
import androidx.datastore.dataStoreFile
import com.jakewharton.retrofit2.converter.kotlinx.serialization.asConverterFactory
import com.nativeapptemplate.nativeapptemplatefree.MainActivityViewModel
import com.nativeapptemplate.nativeapptemplatefree.NatConstants
import com.nativeapptemplate.nativeapptemplatefree.UserPreferences
import com.nativeapptemplate.nativeapptemplatefree.data.item_tag.ItemTagApi
import com.nativeapptemplate.nativeapptemplatefree.data.item_tag.ItemTagRepository
import com.nativeapptemplate.nativeapptemplatefree.data.item_tag.ItemTagRepositoryImpl
import com.nativeapptemplate.nativeapptemplatefree.data.login.AccountPasswordApi
import com.nativeapptemplate.nativeapptemplatefree.data.login.AccountPasswordRepository
import com.nativeapptemplate.nativeapptemplatefree.data.login.AccountPasswordRepositoryImpl
import com.nativeapptemplate.nativeapptemplatefree.data.login.LoginApi
import com.nativeapptemplate.nativeapptemplatefree.data.login.LoginRepository
import com.nativeapptemplate.nativeapptemplatefree.data.login.LoginRepositoryImpl
import com.nativeapptemplate.nativeapptemplatefree.data.login.SignUpApi
import com.nativeapptemplate.nativeapptemplatefree.data.login.SignUpRepository
import com.nativeapptemplate.nativeapptemplatefree.data.login.SignUpRepositoryImpl
import com.nativeapptemplate.nativeapptemplatefree.data.shop.ShopApi
import com.nativeapptemplate.nativeapptemplatefree.data.shop.ShopRepository
import com.nativeapptemplate.nativeapptemplatefree.data.shop.ShopRepositoryImpl
import com.nativeapptemplate.nativeapptemplatefree.datastore.NatPreferencesDataSource
import com.nativeapptemplate.nativeapptemplatefree.datastore.UserPreferencesSerializer
import com.nativeapptemplate.nativeapptemplatefree.network.AuthInterceptor
import com.nativeapptemplate.nativeapptemplatefree.network.NatDispatchers
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.AcceptPrivacyViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.AcceptTermsViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.ForgotPasswordViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.OnboardingViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.ResendConfirmationInstructionsViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.SignInEmailAndPasswordViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.app_root.SignUpViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.scan.DoScanViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.scan.ScanViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.settings.DarkModeSettingsViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.settings.PasswordEditViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.settings.SettingsViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.settings.ShopkeeperEditViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_detail.ShopDetailViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_settings.NumberTagsWebpageListViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_settings.ShopBasicSettingsViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_settings.ShopSettingsViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_settings.item_tag_detail.ItemTagDetailViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_settings.item_tag_detail.ItemTagEditViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_settings.item_tag_detail.ItemTagWriteViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_settings.item_tag_list.ItemTagCreateViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shop_settings.item_tag_list.ItemTagListViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shops.ShopCreateViewModel
import com.nativeapptemplate.nativeapptemplatefree.ui.shops.ShopListViewModel
import com.nativeapptemplate.nativeapptemplatefree.utils.ConnectivityManagerNetworkMonitor
import com.nativeapptemplate.nativeapptemplatefree.utils.NetworkMonitor
import com.nativeapptemplate.nativeapptemplatefree.utils.ProfileVerifierLogger
import com.skydoves.sandwich.retrofit.adapters.ApiResponseCallAdapterFactory
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlinx.serialization.json.Json
import okhttp3.MediaType.Companion.toMediaType
import okhttp3.OkHttpClient
import okhttp3.logging.HttpLoggingInterceptor
import org.koin.core.module.dsl.viewModel
import org.koin.core.qualifier.named
import org.koin.dsl.module
import retrofit2.Retrofit
import java.util.concurrent.TimeUnit

val appModule = module {
  // Dispatchers
  single<CoroutineDispatcher>(named(NatDispatchers.IO)) { Dispatchers.IO }
  single<CoroutineDispatcher>(named(NatDispatchers.Default)) { Dispatchers.Default }

  // Coroutine Scopes
  single(named("ApplicationScope")) {
    CoroutineScope(SupervisorJob() + get<CoroutineDispatcher>(named(NatDispatchers.Default)))
  }

  // Network
  single {
    HttpLoggingInterceptor().apply {
      level = HttpLoggingInterceptor.Level.HEADERS
    }
  }
  single { AuthInterceptor(get()) } // Assuming AuthInterceptor is available
  single {
    OkHttpClient.Builder()
      .connectTimeout(30, TimeUnit.SECONDS)
      .addNetworkInterceptor(get<AuthInterceptor>())
      .addInterceptor(get<HttpLoggingInterceptor>())
      .build()
  }
  single {
    val json = Json { ignoreUnknownKeys = true; isLenient = true }
    Retrofit.Builder()
      .baseUrl(NatConstants.baseUrlString())
      .client(get())
      .addConverterFactory(json.asConverterFactory("application/json".toMediaType()))
      .addCallAdapterFactory(ApiResponseCallAdapterFactory.create())
      .build()
  }

  // APIs
  single { get<Retrofit>().create(SignUpApi::class.java) }
  single { get<Retrofit>().create(LoginApi::class.java) }
  single { get<Retrofit>().create(AccountPasswordApi::class.java) }
  single { get<Retrofit>().create(ShopApi::class.java) }
  single { get<Retrofit>().create(ItemTagApi::class.java) }

  // Repositories
  single<SignUpRepository> { SignUpRepositoryImpl(get(), get(named(NatDispatchers.IO))) }
  single<LoginRepository> { LoginRepositoryImpl(get(), get(), get(named(NatDispatchers.IO))) }
  single<AccountPasswordRepository> { AccountPasswordRepositoryImpl(get(), get(), get(named(NatDispatchers.IO))) }
  single<ShopRepository> { ShopRepositoryImpl(get(), get(), get(named(NatDispatchers.IO))) }
  single<ItemTagRepository> { ItemTagRepositoryImpl(get(), get(), get(named(NatDispatchers.IO))) }
  single<NetworkMonitor> { ConnectivityManagerNetworkMonitor(get()) }
  single { ProfileVerifierLogger(get(named("ApplicationScope"))) }

  // DataStore
  single { UserPreferencesSerializer() }
  single<DataStore<UserPreferences>> {
    val scope: CoroutineScope = get(named("ApplicationScope"))
    val ioDispatcher: CoroutineDispatcher = get(named(NatDispatchers.IO))
    DataStoreFactory.create(
      serializer = get<UserPreferencesSerializer>(),
      scope = CoroutineScope(scope.coroutineContext + ioDispatcher),
    ) {
      get<android.content.Context>().dataStoreFile("user_preferences.pb")
    }
  }
  single { NatPreferencesDataSource(get()) }

  // ViewModels
  viewModel { MainActivityViewModel(get()) }
  viewModel { OnboardingViewModel() }
  viewModel { SignInEmailAndPasswordViewModel(get()) }
  viewModel { SignUpViewModel(get()) }
  viewModel { ForgotPasswordViewModel(get()) }
  viewModel { ResendConfirmationInstructionsViewModel(get()) }
  viewModel { AcceptTermsViewModel(get()) }
  viewModel { AcceptPrivacyViewModel(get()) }
  viewModel { ShopListViewModel(get(), get()) }
  viewModel { ShopCreateViewModel(get()) }
  viewModel { ShopDetailViewModel(get(), get(), get(), get()) }
  viewModel { ShopSettingsViewModel(get(), get(), get(), get()) }
  viewModel { ShopBasicSettingsViewModel(get(), get()) }
  viewModel { NumberTagsWebpageListViewModel(get(), get()) }
  viewModel { ItemTagListViewModel(get(), get(), get()) }
  viewModel { ItemTagCreateViewModel(get(), get(), get()) }
  viewModel { ItemTagDetailViewModel(get(), get()) }
  viewModel { ItemTagEditViewModel(get(), get(), get()) }
  viewModel { ItemTagWriteViewModel(get()) }
  viewModel { ScanViewModel(get(), get()) }
  viewModel { DoScanViewModel(get(), get()) }
  viewModel { SettingsViewModel(get()) }
  viewModel { DarkModeSettingsViewModel(get()) }
  viewModel { PasswordEditViewModel(get()) }
  viewModel { ShopkeeperEditViewModel(get(), get()) }
}
