package com.nativeapptemplate.nativeapptemplatefree

import android.app.Application
import com.nativeapptemplate.nativeapptemplatefree.di.appModule
import com.nativeapptemplate.nativeapptemplatefree.utils.ProfileVerifierLogger
import com.ovidiucristurean.shared.di.initKoin
import org.koin.android.ext.android.inject
import org.koin.android.ext.koin.androidContext
import org.koin.android.ext.koin.androidLogger

class NativeAppTemplateApplication : Application() {
  val profileVerifierLogger: ProfileVerifierLogger by inject()

  override fun onCreate() {
    super.onCreate()
    
    initKoin {
      androidLogger()
      androidContext(this@NativeAppTemplateApplication)
      modules(appModule)
    }
    
    profileVerifierLogger()
  }
}
