// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "analyticsKitPackage",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "sharedKit",
            targets: ["sharedKit"])
    ],
    targets: [
        .binaryTarget(
            name: "sharedKit",
            path: "./sharedKit.xcframework"
        )
    ]
)
