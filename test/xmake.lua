target("taocpPlusTest")
    set_kind("binary")
    add_headerfiles("*.h")
    add_files("*.cpp")

    includes("volume1")

    add_packages("gtest")
    add_deps("taocpPlus")