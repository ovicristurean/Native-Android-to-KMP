package com.ovidiucristurean.shared.di

import com.ovidiucristurean.shared.analytics.data.repository.RoomAnalyticsRepository
import com.ovidiucristurean.shared.analytics.domain.repository.AnalyticsRepository
import com.ovidiucristurean.shared.analytics.domain.usecase.RecordVisitUseCase
import com.ovidiucristurean.shared.analytics.presentation.AnalyticsTracker
import com.ovidiucristurean.shared.analytics.presentation.DefaultAnalyticsTracker
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.SupervisorJob
import org.koin.core.module.Module
import org.koin.dsl.module

fun commonModule() = module {
    single<AnalyticsRepository> { RoomAnalyticsRepository(get()) }
    single { RecordVisitUseCase(get()) }
    single<AnalyticsTracker> { 
        DefaultAnalyticsTracker(
            recordVisit = get(),
            scope = CoroutineScope(SupervisorJob())
        )
    }
}

expect fun platformModule(): Module
