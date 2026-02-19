plugins {
  alias(libs.plugins.kotlin.multiplatform)
  alias(libs.plugins.android.kotlin.multiplatform.library)
  alias(libs.plugins.android.lint)
  alias(libs.plugins.ksp)
  alias(libs.plugins.room)
}

kotlin {
  androidLibrary {
    namespace = "com.ovidiucristurean.shared"
    compileSdk = 35
    minSdk = 26
  }

  val xcfName = "sharedKit"
  iosX64 { binaries.framework { baseName = xcfName } }
  iosArm64 { binaries.framework { baseName = xcfName } }
  iosSimulatorArm64 { binaries.framework { baseName = xcfName } }

  sourceSets {
    commonMain {
      dependencies {
        api(libs.kotlinx.datetime)
        implementation(libs.kotlinx.coroutines.core)
        implementation(libs.androidx.room.runtime)
        implementation(libs.uuid)

        // Koin
        api(libs.koin.core)
      }
    }
    commonTest {
      dependencies {
        implementation(libs.kotlin.test)
        implementation(libs.kotlinx.coroutines.test)
      }
    }
  }
}

dependencies {
  add("kspAndroid", libs.androidx.room.compiler)
  add("kspIosSimulatorArm64", libs.androidx.room.compiler)
  add("kspIosX64", libs.androidx.room.compiler)
  add("kspIosArm64", libs.androidx.room.compiler)
}

room {
  schemaDirectory("$projectDir/schemas")
}
