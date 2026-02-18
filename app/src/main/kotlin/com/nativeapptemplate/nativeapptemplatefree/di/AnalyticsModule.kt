package com.nativeapptemplate.nativeapptemplatefree.di

import android.content.Context
import com.ovidiucristurean.shared.analytics.data.local.database.AnalyticsDatabase
import com.ovidiucristurean.shared.analytics.data.local.database.getAnalyticsDatabaseBuilder
import com.ovidiucristurean.shared.analytics.data.repository.RoomAnalyticsRepository
import com.ovidiucristurean.shared.analytics.domain.repository.AnalyticsRepository
import com.ovidiucristurean.shared.analytics.domain.usecase.RecordVisitUseCase
import com.ovidiucristurean.shared.analytics.presentation.AnalyticsTracker
import com.ovidiucristurean.shared.analytics.presentation.DefaultAnalyticsTracker
import dagger.Module
import dagger.Provides
import dagger.hilt.InstallIn
import dagger.hilt.android.qualifiers.ApplicationContext
import dagger.hilt.components.SingletonComponent
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.SupervisorJob
import javax.inject.Singleton

@Module
@InstallIn(SingletonComponent::class)
object AnalyticsModule {

    @Provides
    @Singleton
    fun provideAnalyticsDatabase(@ApplicationContext context: Context): AnalyticsDatabase {
        return getAnalyticsDatabaseBuilder(context).build()
    }

    @Provides
    @Singleton
    fun provideAnalyticsRepository(database: AnalyticsDatabase): AnalyticsRepository {
        return RoomAnalyticsRepository(database)
    }

    @Provides
    @Singleton
    fun provideRecordVisitUseCase(repository: AnalyticsRepository): RecordVisitUseCase {
        return RecordVisitUseCase(repository)
    }

    @Provides
    @Singleton
    fun provideAnalyticsTracker(recordVisitUseCase: RecordVisitUseCase): AnalyticsTracker {
        return DefaultAnalyticsTracker(
            recordVisit = recordVisitUseCase,
            scope = CoroutineScope(SupervisorJob())
        )
    }
}
