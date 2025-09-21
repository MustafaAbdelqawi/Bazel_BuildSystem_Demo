load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

filegroup(
    name="srcs",
    srcs=["CMakeLists.txt", "lib.cpp", "lib.h"],
    visibility=["//visibility:public"],
)


cmake(
    name="addlib_cmake",
    lib_source=":srcs",
    out_static_libs=["libcmakelib.a"],
    visibility=["//visibility:public"],
)

# Step 2: Expose headers via a cc_library
cc_library(
    name = "cmakelib",
    hdrs = ["lib.h"],        # headers for dependents
    includes = ["."],        # include path for dependents
    # Link against the static library produced by cmake()
    linkstatic = True,
    deps = [":addlib_cmake"],
    visibility = ["//visibility:public"],
)