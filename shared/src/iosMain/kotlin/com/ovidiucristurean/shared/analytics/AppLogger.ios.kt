package com.ovidiucristurean.shared.analytics

import platform.Foundation.NSLog

actual fun logMessage(message: String) {
  NSLog("ANDROID_TO_KMP_APP - $message")
}