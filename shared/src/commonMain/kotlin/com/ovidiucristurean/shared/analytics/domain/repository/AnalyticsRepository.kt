package com.ovidiucristurean.shared.analytics.domain.repository

import com.ovidiucristurean.shared.analytics.domain.model.VisitEvent
import kotlinx.datetime.Instant

interface AnalyticsRepository {
    suspend fun recordVisit(event: VisitEvent)
    suspend fun getVisits(
        shopId: String,
        from: Instant,
        to: Instant
    ): List<VisitEvent>
}
