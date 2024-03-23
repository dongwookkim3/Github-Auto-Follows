cmake_minimum_required(VERSION 3.27)

set(CMAKE_TOOLCHAIN_FILE "C:/Users/dongw/.vcpkg-clion/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "vcpkg toolchain file")

project(
        Github_Auto_Follows
        VERSION 0.1
        DESCRIPTION "Github Auto Follows Bot"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)

enable_testing()

add_subdirectory(src)