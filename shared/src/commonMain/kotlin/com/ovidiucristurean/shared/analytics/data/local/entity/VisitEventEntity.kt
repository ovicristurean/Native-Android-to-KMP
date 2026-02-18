package com.ovidiucristurean.shared.analytics.data.local.entity

import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity(tableName = "visit_events")
data class VisitEventEntity(
    @PrimaryKey val id: String,
    val shopId: String,
    val timestampEpochMillis: Long
)
