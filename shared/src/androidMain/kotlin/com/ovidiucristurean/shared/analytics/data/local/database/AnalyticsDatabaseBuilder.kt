package com.ovidiucristurean.shared.analytics.data.local.database

import android.content.Context
import androidx.room.Room
import androidx.room.RoomDatabase

fun getAnalyticsDatabaseBuilder(context: Context): RoomDatabase.Builder<AnalyticsDatabase> {
    val dbFile = context.getDatabasePath("analytics.db")
    return Room.databaseBuilder<AnalyticsDatabase>(
        context = context,
        name = dbFile.absolutePath
    )
}
