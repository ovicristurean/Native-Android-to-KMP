package com.ovidiucristurean.shared.analytics

import android.util.Log

actual fun logMessage(message: String) {
  Log.d("ANDROID_TO_KMP_APP", message)
}
