import org.jetbrains.kotlin.gradle.dsl.KotlinMultiplatformExtension
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
  alias(libs.plugins.kotlin.multiplatform)
  alias(libs.plugins.android.kotlin.multiplatform.library)
  alias(libs.plugins.android.lint)
  alias(libs.plugins.ksp)
  alias(libs.plugins.room)
  alias(libs.plugins.skie)
}

kotlin {
  androidLibrary {
    namespace = "com.ovidiucristurean.shared"
    compileSdk = 35
    minSdk = 26
  }

  configureXCFramework()

  sourceSets {
    commonMain {
      dependencies {
        api(libs.kotlinx.datetime)
        implementation(libs.kotlinx.coroutines.core)
        implementation(libs.androidx.room.runtime)
        implementation(libs.uuid)
        api(libs.koin.core)
        implementation(libs.androidx.sqlite.bundled)
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

private fun KotlinMultiplatformExtension.configureXCFramework() {
  val xcFrameworkName = "analyticsKit"
  val xcf = XCFramework(xcFrameworkName)
  val bundleId = "com.ovicristurean.${xcFrameworkName}"

  listOf(
    iosX64(),
    iosArm64(),
    iosSimulatorArm64(),
  ).forEach {
    it.binaries.framework {
      baseName = xcFrameworkName
      binaryOption("bundleId", bundleId)
      xcf.add(this)
      isStatic = true
    }
  }
}
