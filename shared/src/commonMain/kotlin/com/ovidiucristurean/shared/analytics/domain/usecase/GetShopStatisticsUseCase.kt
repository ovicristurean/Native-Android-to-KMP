package com.ovidiucristurean.shared.analytics.domain.usecase

import com.ovidiucristurean.shared.analytics.domain.model.ShopStatistics
import com.ovidiucristurean.shared.analytics.domain.repository.AnalyticsRepository
import kotlinx.datetime.DateTimeUnit
import kotlinx.datetime.Instant
import kotlinx.datetime.LocalDate
import kotlinx.datetime.TimeZone
import kotlinx.datetime.plus
import kotlinx.datetime.toLocalDateTime

class GetShopStatisticsUseCase(private val repository: AnalyticsRepository) {
  suspend operator fun invoke(
    shopId: String,
    from: Instant,
    to: Instant,
    timeZone: TimeZone = TimeZone.UTC
  ): ShopStatistics {
    val visits = repository.getVisits(shopId, from, to)
    val totalVisits = visits.size

    val startDate = from.toLocalDateTime(timeZone).date
    val endDate = to.toLocalDateTime(timeZone).date

    val dailyBreakdown = mutableMapOf<LocalDate, Int>()
    var current = startDate
    while (current <= endDate) {
      dailyBreakdown[current] = 0
      current = current.plus(1, DateTimeUnit.DAY)
    }

    visits.forEach { visit ->
      val date = visit.timestamp.toLocalDateTime(timeZone).date
      dailyBreakdown[date] = (dailyBreakdown[date] ?: 0) + 1
    }

    val numberOfDays = dailyBreakdown.size
    val averagePerDay = if (numberOfDays > 0) {
      totalVisits.toDouble() / numberOfDays
    } else {
      0.0
    }

    return ShopStatistics(
      totalVisits = totalVisits,
      averagePerDay = averagePerDay,
      dailyBreakdown = dailyBreakdown
    )
  }
}
