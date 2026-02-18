package com.ovidiucristurean.shared.analytics.domain.usecase

import com.ovidiucristurean.shared.analytics.domain.model.WeeklyTrend
import com.ovidiucristurean.shared.analytics.domain.repository.AnalyticsRepository
import kotlinx.datetime.DateTimePeriod
import kotlinx.datetime.Instant
import kotlinx.datetime.TimeZone
import kotlinx.datetime.minus

class GetWeeklyTrendUseCase(private val repository: AnalyticsRepository) {
    suspend operator fun invoke(
        shopId: String,
        now: Instant,
        timeZone: TimeZone = TimeZone.UTC
    ): WeeklyTrend {
        val weekPeriod = DateTimePeriod(days = 7)
        val currentWeekStart = now.minus(weekPeriod, timeZone)
        val previousWeekStart = currentWeekStart.minus(weekPeriod, timeZone)

        val currentWeekVisits = repository.getVisits(shopId, currentWeekStart, now).size
        val previousWeekVisits = repository.getVisits(shopId, previousWeekStart, currentWeekStart).size

        val percentageChange = when {
            previousWeekVisits == 0 -> {
                if (currentWeekVisits == 0) 0.0 else 100.0
            }
            else -> {
                ((currentWeekVisits - previousWeekVisits).toDouble() / previousWeekVisits) * 100.0
            }
        }

        return WeeklyTrend(
            currentWeek = currentWeekVisits,
            previousWeek = previousWeekVisits,
            percentageChange = percentageChange
        )
    }
}
