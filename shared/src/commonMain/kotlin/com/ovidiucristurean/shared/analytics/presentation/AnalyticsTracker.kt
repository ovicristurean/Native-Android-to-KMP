package com.ovidiucristurean.shared.analytics.presentation

import com.ovidiucristurean.shared.analytics.domain.model.VisitEvent
import com.ovidiucristurean.shared.analytics.domain.usecase.RecordVisitUseCase
import com.ovidiucristurean.shared.analytics.logMessage
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.datetime.Clock

interface AnalyticsTracker {
    fun trackVisit(shopId: String)
}

class DefaultAnalyticsTracker(
  private val recordVisit: RecordVisitUseCase,
  private val scope: CoroutineScope,
  private val clock: Clock = Clock.System
) : AnalyticsTracker {

    override fun trackVisit(shopId: String) {
      logMessage("trackVisit called from AnalyticsTracker")
        scope.launch(Dispatchers.Default) {
            try {
                val event = VisitEvent(
                    shopId = shopId,
                    timestamp = clock.now()
                )
                recordVisit(event)
            } catch (e: Exception) {
                // Fail silently for analytics
            }
        }
    }
}
