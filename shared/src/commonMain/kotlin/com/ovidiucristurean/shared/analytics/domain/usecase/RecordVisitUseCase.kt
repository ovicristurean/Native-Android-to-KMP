package com.ovidiucristurean.shared.analytics.domain.usecase

import com.ovidiucristurean.shared.analytics.domain.model.VisitEvent
import com.ovidiucristurean.shared.analytics.domain.repository.AnalyticsRepository

class RecordVisitUseCase(private val repository: AnalyticsRepository) {
    suspend operator fun invoke(event: VisitEvent) {
        repository.recordVisit(event)
    }
}
