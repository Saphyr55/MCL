local version = "cxx17"
local project_name = "mcl"

set_project(project_name)
set_languages(version)

target("example")
    set_kind("binary")
    add_deps("mcl")
    add_files("example/**.cpp")
target_end()

target("mcl")
    set_kind("static")
    add_files("Logger.cpp")
    add_headerfiles("mcl/Logger.hpp")
target_end()