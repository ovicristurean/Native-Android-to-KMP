package com.ovidiucristurean.shared.analytics.data.local.dao

import androidx.room.Dao
import androidx.room.Insert
import androidx.room.Query
import com.ovidiucristurean.shared.analytics.data.local.entity.VisitEventEntity

@Dao
interface VisitEventDao {
    @Insert
    suspend fun insert(event: VisitEventEntity)

    @Query("""
        SELECT * FROM visit_events
        WHERE shopId = :shopId
        AND timestampEpochMillis BETWEEN :from AND :to
    """)
    suspend fun getVisits(
        shopId: String,
        from: Long,
        to: Long
    ): List<VisitEventEntity>
}
