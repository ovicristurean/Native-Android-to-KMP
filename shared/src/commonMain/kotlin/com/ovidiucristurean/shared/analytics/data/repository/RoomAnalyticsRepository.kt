package com.ovidiucristurean.shared.analytics.data.repository

import com.benasher44.uuid.uuid4
import com.ovidiucristurean.shared.analytics.data.local.database.AnalyticsDatabase
import com.ovidiucristurean.shared.analytics.data.local.entity.VisitEventEntity
import com.ovidiucristurean.shared.analytics.domain.model.VisitEvent
import com.ovidiucristurean.shared.analytics.domain.repository.AnalyticsRepository
import kotlinx.datetime.Instant

class RoomAnalyticsRepository(
    database: AnalyticsDatabase
) : AnalyticsRepository {
    private val dao = database.visitEventDao()

    override suspend fun recordVisit(event: VisitEvent) {
        dao.insert(
            VisitEventEntity(
                id = uuid4().toString(),
                shopId = event.shopId,
                timestampEpochMillis = event.timestamp.toEpochMilliseconds()
            )
        )
    }

    override suspend fun getVisits(
        shopId: String,
        from: Instant,
        to: Instant
    ): List<VisitEvent> {
        return dao.getVisits(
            shopId = shopId,
            from = from.toEpochMilliseconds(),
            to = to.toEpochMilliseconds()
        ).map {
            VisitEvent(
                shopId = it.shopId,
                timestamp = Instant.fromEpochMilliseconds(it.timestampEpochMillis)
            )
        }
    }
}
