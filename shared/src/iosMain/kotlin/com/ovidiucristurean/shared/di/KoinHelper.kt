package com.ovidiucristurean.shared.di

import com.ovidiucristurean.shared.analytics.presentation.AnalyticsTracker
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class KoinHelper : KoinComponent {
    private val analyticsTracker: AnalyticsTracker by inject()

    fun getAnalyticsTracker(): AnalyticsTracker = analyticsTracker
}

fun initKoinIos() = initKoin {}
