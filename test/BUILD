
cc_test(
    name = "test", 
    srcs = ["unitTest.cpp"],
    deps = [":wrapperTest","@com_google_googletest//:gtest_main", "//lib:wrapper", "//lib:wrapper_vector"],
    
)

cc_library(
    name = "wrapperTest", 
    hdrs = ["wrapperTest.h"],
    srcs = ["wrapperTest.cpp"],
    deps = ["//lib:wrapper", "//lib:wrapper_vector"],
    copts = [
        "-Werror",
        "-std=c++14"
    ]
)