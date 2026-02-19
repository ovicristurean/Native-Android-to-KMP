package com.nativeapptemplate.nativeapptemplatefree.demo.login

import com.nativeapptemplate.nativeapptemplatefree.data.login.AccountPasswordRepository
import com.nativeapptemplate.nativeapptemplatefree.model.UpdatePasswordBody
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableStateFlow

class DemoAccountPasswordRepository (
) : AccountPasswordRepository {

  override fun updateAccountPassword(updatePasswordBody: UpdatePasswordBody): Flow<Boolean> = MutableStateFlow(true)
}
