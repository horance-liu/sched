# Description: batching scheduler.

package(
    default_visibility = ["//sched:internal"],
    features = ["-layering_check"],
)

licenses(["notice"])  # Apache 2.0

cc_library(
    name = "batch_scheduler_retrier",
    hdrs = ["batch_scheduler_retrier.h"],
    visibility = ["//visibility:public"],
    deps = [
        "@org_tensorflow//tensorflow/contrib/batching:batch_scheduler",
        "@org_tensorflow//tensorflow/core:lib",
    ],
)

cc_test(
    name = "batch_scheduler_retrier_test",
    srcs = [
        "batch_scheduler_retrier_test.cc",
    ],
    deps = [
        ":batch_scheduler_retrier",
        "@org_tensorflow//tensorflow/contrib/batching/test_util:fake_clock_env",
        "@org_tensorflow//tensorflow/core:lib",
        "@org_tensorflow//tensorflow/core:protos_all_cc",
        "@org_tensorflow//tensorflow/core:test",
        "@gtest//:gtest_main",
    ],
)

