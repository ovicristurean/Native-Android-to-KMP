package com.ovidiucristurean.shared.analytics.data.local.database

import androidx.room.ConstructedBy
import androidx.room.Database
import androidx.room.RoomDatabase
import androidx.room.RoomDatabaseConstructor
import com.ovidiucristurean.shared.analytics.data.local.dao.VisitEventDao
import com.ovidiucristurean.shared.analytics.data.local.entity.VisitEventEntity

@Database(entities = [VisitEventEntity::class], version = 1)
@ConstructedBy(AnalyticsDatabaseConstructor::class)
abstract class AnalyticsDatabase : RoomDatabase() {
  abstract fun visitEventDao(): VisitEventDao
}

@Suppress("NO_ACTUAL_FOR_EXPECT")
expect object AnalyticsDatabaseConstructor : RoomDatabaseConstructor<AnalyticsDatabase> {
  override fun initialize(): AnalyticsDatabase
}
