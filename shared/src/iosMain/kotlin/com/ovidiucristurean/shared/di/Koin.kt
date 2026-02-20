package com.ovidiucristurean.shared.di

import androidx.sqlite.driver.bundled.BundledSQLiteDriver
import com.ovidiucristurean.shared.analytics.data.local.database.getAnalyticsDatabaseBuilder
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO
import org.koin.core.module.Module
import org.koin.dsl.module

actual fun platformModule(): Module = module {
  single {
    getAnalyticsDatabaseBuilder()
      .setDriver(BundledSQLiteDriver())
      .setQueryCoroutineContext(Dispatchers.IO)
      .build()
  }
}
