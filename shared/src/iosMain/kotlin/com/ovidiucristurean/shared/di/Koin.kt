package com.ovidiucristurean.shared.di

import com.ovidiucristurean.shared.analytics.data.local.database.getAnalyticsDatabaseBuilder
import org.koin.core.module.Module
import org.koin.dsl.module

actual fun platformModule(): Module = module {
    single { getAnalyticsDatabaseBuilder().build() }
}
