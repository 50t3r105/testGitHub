load("@rules_cc//cc:defs.bzl","cc_binary","cc_library")

cc_library(
    name = "wrapper",
    hdrs = ["wrapper.h"],
    visibility = ["//test:__pkg__","//main:__pkg__"]
)

cc_library(
    name = "wrapper_vector",
    hdrs = ["wrapper_vector.h"],
    srcs = ["wrapper_vector.cpp"],
    deps = [":wrapper"],
    visibility = ["//test:__pkg__","//main:__pkg__"]
)
