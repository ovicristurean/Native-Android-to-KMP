// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "AnalyticsKit",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "analyticsKit",
            targets: ["analyticsKit"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "analyticsKit",
            url: "https://github.com/ovicristurean/Native-Android-to-KMP/releases/download/0.1.0/analyticsKit.xcframework.zip",
            checksum: "aec9fd24ae02408bfb9eed2f6cb13c285b234c9ffd0072da0c38483063247b5f"
        )
    ]
)
