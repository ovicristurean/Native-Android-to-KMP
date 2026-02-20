package com.ovidiucristurean.shared.analytics.data.local.database

import androidx.room.Room
import androidx.room.RoomDatabase
import platform.Foundation.NSHomeDirectory

fun getAnalyticsDatabaseBuilder(): RoomDatabase.Builder<AnalyticsDatabase> {
    val dbFile = NSHomeDirectory() + "/analytics.db"
    return Room.databaseBuilder<AnalyticsDatabase>(
        name = dbFile,
        factory = { AnalyticsDatabase::class.instantiateImpl() }
    )
}
