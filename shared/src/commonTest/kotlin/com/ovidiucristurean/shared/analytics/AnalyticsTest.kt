package com.ovidiucristurean.shared.analytics

import com.ovidiucristurean.shared.analytics.data.repository.InMemoryAnalyticsRepository
import com.ovidiucristurean.shared.analytics.domain.model.VisitEvent
import com.ovidiucristurean.shared.analytics.domain.usecase.GetShopStatisticsUseCase
import com.ovidiucristurean.shared.analytics.domain.usecase.GetWeeklyTrendUseCase
import com.ovidiucristurean.shared.analytics.domain.usecase.RecordVisitUseCase
import kotlinx.coroutines.test.runTest
import kotlinx.datetime.DateTimeUnit
import kotlinx.datetime.Instant
import kotlinx.datetime.TimeZone
import kotlinx.datetime.minus
import kotlinx.datetime.plus
import kotlin.test.BeforeTest
import kotlin.test.Test
import kotlin.test.assertEquals

class AnalyticsTest {
    private lateinit var repository: InMemoryAnalyticsRepository
    private lateinit var recordVisitUseCase: RecordVisitUseCase
    private lateinit var getShopStatisticsUseCase: GetShopStatisticsUseCase
    private lateinit var getWeeklyTrendUseCase: GetWeeklyTrendUseCase

    private val shopId = "test-shop"
    private val timeZone = TimeZone.UTC
    private val baseTime = Instant.parse("2024-01-10T10:00:00Z")

    @BeforeTest
    fun setup() {
        repository = InMemoryAnalyticsRepository()
        recordVisitUseCase = RecordVisitUseCase(repository)
        getShopStatisticsUseCase = GetShopStatisticsUseCase(repository)
        getWeeklyTrendUseCase = GetWeeklyTrendUseCase(repository)
    }

    @Test
    fun testDailyBreakdownAndAverage() = runTest {
        val from = baseTime
        val to = baseTime.plus(2, DateTimeUnit.DAY, timeZone) // 3 days total: 10, 11, 12

        recordVisitUseCase(VisitEvent(shopId, baseTime)) // Day 1
        recordVisitUseCase(VisitEvent(shopId, baseTime)) // Day 1
        recordVisitUseCase(VisitEvent(shopId, baseTime.plus(2, DateTimeUnit.DAY, timeZone))) // Day 3

        val stats = getShopStatisticsUseCase(shopId, from, to, timeZone)

        assertEquals(3, stats.totalVisits)
        assertEquals(3, stats.dailyBreakdown.size)
        assertEquals(2, stats.dailyBreakdown.values.count { it > 0 })
        assertEquals(1, stats.dailyBreakdown.values.count { it == 0 })
        assertEquals(1.0, stats.averagePerDay) // 3 visits / 3 days
    }

    @Test
    fun testZeroVisitAverage() = runTest {
        val from = baseTime
        val to = baseTime.plus(4, DateTimeUnit.DAY, timeZone) // 5 days

        val stats = getShopStatisticsUseCase(shopId, from, to, timeZone)

        assertEquals(0, stats.totalVisits)
        assertEquals(5, stats.dailyBreakdown.size)
        assertEquals(0.0, stats.averagePerDay)
    }

    @Test
    fun testWeeklyTrendIncrease() = runTest {
        val now = baseTime.plus(14, DateTimeUnit.DAY, timeZone)
        
        // Previous week: 2 visits
        recordVisitUseCase(VisitEvent(shopId, now.minus(10, DateTimeUnit.DAY, timeZone)))
        recordVisitUseCase(VisitEvent(shopId, now.minus(11, DateTimeUnit.DAY, timeZone)))

        // Current week: 4 visits
        recordVisitUseCase(VisitEvent(shopId, now.minus(1, DateTimeUnit.DAY, timeZone)))
        recordVisitUseCase(VisitEvent(shopId, now.minus(2, DateTimeUnit.DAY, timeZone)))
        recordVisitUseCase(VisitEvent(shopId, now.minus(3, DateTimeUnit.DAY, timeZone)))
        recordVisitUseCase(VisitEvent(shopId, now.minus(4, DateTimeUnit.DAY, timeZone)))

        val trend = getWeeklyTrendUseCase(shopId, now, timeZone)

        assertEquals(4, trend.currentWeek)
        assertEquals(2, trend.previousWeek)
        assertEquals(100.0, trend.percentageChange)
    }

    @Test
    fun testWeeklyTrendDecrease() = runTest {
        val now = baseTime.plus(14, DateTimeUnit.DAY, timeZone)

        // Previous week: 4 visits
        recordVisitUseCase(VisitEvent(shopId, now.minus(10, DateTimeUnit.DAY, timeZone)))
        recordVisitUseCase(VisitEvent(shopId, now.minus(11, DateTimeUnit.DAY, timeZone)))
        recordVisitUseCase(VisitEvent(shopId, now.minus(12, DateTimeUnit.DAY, timeZone)))
        recordVisitUseCase(VisitEvent(shopId, now.minus(13, DateTimeUnit.DAY, timeZone)))

        // Current week: 2 visits
        recordVisitUseCase(VisitEvent(shopId, now.minus(1, DateTimeUnit.DAY, timeZone)))
        recordVisitUseCase(VisitEvent(shopId, now.minus(2, DateTimeUnit.DAY, timeZone)))

        val trend = getWeeklyTrendUseCase(shopId, now, timeZone)

        assertEquals(2, trend.currentWeek)
        assertEquals(4, trend.previousWeek)
        assertEquals(-50.0, trend.percentageChange)
    }

    @Test
    fun testWeeklyTrendEdgeCases() = runTest {
        val now = baseTime.plus(14, DateTimeUnit.DAY, timeZone)

        // Both zero
        var trend = getWeeklyTrendUseCase(shopId, now, timeZone)
        assertEquals(0.0, trend.percentageChange)

        // Previous zero, current non-zero
        recordVisitUseCase(VisitEvent(shopId, now.minus(1, DateTimeUnit.DAY, timeZone)))
        trend = getWeeklyTrendUseCase(shopId, now, timeZone)
        assertEquals(100.0, trend.percentageChange)
    }
}
