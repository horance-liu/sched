workspace(name = "sched")

# sha256:
# curl -L https://github.com/tensorflow/tensorflow/archive/<git hash>.tar.gz | sha256sum

# ServingLite depends on TensorFlow. 
http_archive(
    name = "org_tensorflow",
    sha256 = "ad475bf2ed9c0ac8a6b11ee820111a6e4a830cb396f80fe62c4d98d51d2af445",
    strip_prefix = "tensorflow-5d62202cb1491cf97f0cd34a9c7b0d691984ff5b",
    urls = [
        "https://mirror.bazel.build/github.com/tensorflow/tensorflow/archive/5d62202cb1491cf97f0cd34a9c7b0d691984ff5b.tar.gz",
        "https://github.com/tensorflow/tensorflow/archive/5d62202cb1491cf97f0cd34a9c7b0d691984ff5b.tar.gz",
    ],
)

# TensorFlow depends on "io_bazel_rules_closure" so we need this here.
# Needs to be kept in sync with the same target in TensorFlow's WORKSPACE file.
http_archive(
    name = "io_bazel_rules_closure",
    sha256 = "a38539c5b5c358548e75b44141b4ab637bba7c4dc02b46b1f62a96d6433f56ae",
    strip_prefix = "rules_closure-dbb96841cc0a5fb2664c37822803b06dab20c7d1",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_closure/archive/dbb96841cc0a5fb2664c37822803b06dab20c7d1.tar.gz",
        "https://github.com/bazelbuild/rules_closure/archive/dbb96841cc0a5fb2664c37822803b06dab20c7d1.tar.gz",  # 2018-04-13
    ],
)

# using cut for xunit test framework.
# curl -L https://github.com/horance-liu/cut/archive/1ce2bed5cbf7e9a282eee546ff5637a040e42abe.tar.gz | sha256sum
http_archive(
    name = "xunit_cut",
    sha256 = "f7c2c339a5ab06dc1d16cb03b157a96e6c591f9833f5c072f56af4a8f8013b53",
    strip_prefix = "cut-1ce2bed5cbf7e9a282eee546ff5637a040e42abe",
    urls = [
        "https://github.com/horance-liu/cut/archive/1ce2bed5cbf7e9a282eee546ff5637a040e42abe.tar.gz",
    ],
)

# using gtest for xunit test framework.
# curl -L https://github.com/google/googletest/archive/release-1.8.1.tar.gz | sha256sum
http_archive(
    name = "gtest",
    sha256 = "9bf1fe5182a604b4135edc1a425ae356c9ad15e9b23f9f12a02e80184c3a249c",
    strip_prefix = "googletest-release-1.8.1",
    urls = [
        "https://github.com/google/googletest/archive/release-1.8.1.tar.gz",
    ],    
)

# Please add all new dependencies in workspace.bzl.
load("//sched:workspace.bzl", "sched_workspace")

sched_workspace()

# Specify the minimum required bazel version.
load("@org_tensorflow//tensorflow:version_check.bzl", "check_bazel_version_at_least")

check_bazel_version_at_least("0.16.0")
