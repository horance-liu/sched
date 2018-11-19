package(
    default_visibility = ["//scheduler:internal"],
)

licenses(["notice"])  # Apache 2.0

exports_files(["LICENSE"])

package_group(
    name = "internal",
    packages = [
        "//sched/...",
    ],
)

cc_library(
    name = "ns",
    hdrs = ["scheduler.h"],
)
