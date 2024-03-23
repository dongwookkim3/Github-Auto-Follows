cmake_minimum_required(VERSION 3.27)

set(CMAKE_TOOLCHAIN_FILE "vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "vcpkg toolchain file")
set(CMAKE_CXX_COMPILER "/pathto/g++")

project(
        Github_Auto_Follows
        VERSION 0.1
        DESCRIPTION "Github Auto Follows Bot"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(src)