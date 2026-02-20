package com.ovidiucristurean.shared.analytics

import platform.Foundation.NSLog

actual fun logMessage(message: String) {
  NSLog("IOS_TO_KMP_APP - $message")
}
