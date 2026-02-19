package com.nativeapptemplate.nativeapptemplatefree

import android.app.Application
import com.nativeapptemplate.nativeapptemplatefree.di.appModule
import com.nativeapptemplate.nativeapptemplatefree.utils.ProfileVerifierLogger
import com.ovidiucristurean.shared.di.commonModule
import com.ovidiucristurean.shared.di.platformModule
import org.koin.android.ext.android.inject
import org.koin.android.ext.koin.androidContext
import org.koin.android.ext.koin.androidLogger
import org.koin.core.context.startKoin

class NativeAppTemplateApplication : Application() {
  val profileVerifierLogger: ProfileVerifierLogger by inject()

  override fun onCreate() {
    super.onCreate()
    
    startKoin {
      androidLogger()
      androidContext(this@NativeAppTemplateApplication)
      modules(
        commonModule(),
        platformModule(),
        appModule
      )
    }
    
    profileVerifierLogger()
  }
}
