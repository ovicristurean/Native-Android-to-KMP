package com.ovidiucristurean.shared.analytics.data.repository

import com.ovidiucristurean.shared.analytics.domain.model.VisitEvent
import com.ovidiucristurean.shared.analytics.domain.repository.AnalyticsRepository
import kotlinx.coroutines.sync.Mutex
import kotlinx.coroutines.sync.withLock
import kotlinx.datetime.Instant

class InMemoryAnalyticsRepository : AnalyticsRepository {
    private val events = mutableListOf<VisitEvent>()
    private val mutex = Mutex()

    override suspend fun recordVisit(event: VisitEvent) {
        mutex.withLock {
            events.add(event)
        }
    }

    override suspend fun getVisits(
        shopId: String,
        from: Instant,
        to: Instant
    ): List<VisitEvent> {
        return mutex.withLock {
            events.filter {
                it.shopId == shopId && it.timestamp >= from && it.timestamp <= to
            }
        }
    }
}
