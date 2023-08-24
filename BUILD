cc_binary(
    name = "main",
    srcs = ["src/main.cpp"],
    deps = ["@com_github_google_glog//:glog",
            "@com_github_gflags_gflags//:gflags",
            ],
)

cc_test(
  name = "hello_test",
  size = "small",
  srcs = ["src/hello_test.cpp"],
  deps = ["@com_google_googletest//:gtest_main"],
)