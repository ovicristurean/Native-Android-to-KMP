package com.ovidiucristurean.shared.analytics.domain.model

import kotlinx.datetime.Instant
import kotlinx.datetime.LocalDate

data class VisitEvent(
    val shopId: String,
    val timestamp: Instant
)

data class ShopStatistics(
    val totalVisits: Int,
    val averagePerDay: Double,
    val dailyBreakdown: Map<LocalDate, Int>
)

data class WeeklyTrend(
    val currentWeek: Int,
    val previousWeek: Int,
    val percentageChange: Double
)
