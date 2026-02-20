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
            path: "./analyticsKit.xcframework"
        )
    ]
)
