
cc_test(
    name = "test", 
    srcs = ["unitTest.cpp"],
    deps = [":wrapperTest","@com_google_googletest//:gtest_main"],
)

cc_library(
    name = "wrapperTest", 
    hdrs = ["wrapperTest.h"],
    srcs = ["wrapperTest.cpp"],
    deps = ["//lib:wrapper", "//lib:wrapper_vector"],
)