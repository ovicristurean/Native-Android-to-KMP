package com.ovidiucristurean.shared.analytics.data.local.database

import androidx.room.Room
import androidx.room.RoomDatabase
import kotlinx.cinterop.ExperimentalForeignApi
import platform.Foundation.NSDocumentDirectory
import platform.Foundation.NSFileManager
import platform.Foundation.NSUserDomainMask

fun getAnalyticsDatabaseBuilder(): RoomDatabase.Builder<AnalyticsDatabase> {
  val dbFile = documentDirectory() + "/analytics.db"
  return Room.databaseBuilder<AnalyticsDatabase>(
    name = dbFile,
  )
}

@OptIn(ExperimentalForeignApi::class)
private fun documentDirectory(): String {
  val documentDirectory = NSFileManager.defaultManager.URLForDirectory(
    directory = NSDocumentDirectory,
    inDomain = NSUserDomainMask,
    appropriateForURL = null,
    create = false,
    error = null,
  )
  return requireNotNull(documentDirectory?.path)
}
