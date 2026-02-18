package com.ovidiucristurean.shared.analytics.data.local.database

import androidx.room.Database
import androidx.room.RoomDatabase
import com.ovidiucristurean.shared.analytics.data.local.dao.VisitEventDao
import com.ovidiucristurean.shared.analytics.data.local.entity.VisitEventEntity

@Database(entities = [VisitEventEntity::class], version = 1)
abstract class AnalyticsDatabase : RoomDatabase() {
    abstract fun visitEventDao(): VisitEventDao
}
