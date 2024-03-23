cmake_minimum_required(VERSION 3.27)

add_compile_options(-Werror -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion -Wshadow -Wundef -Wunreachable-code -Wstrict-aliasing -Wnull-dereference -Wdouble-promotion -Wformat=2 -Wcast-qual -Wcast-align)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_compile_options(-Wuseless-cast)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    add_compile_options(-Weverything -Wno-c++98-compat -Wno-c++98-compat-pedantic -Wno-unused-macros -Wno-padded)
endif ()


add_executable(
        integrated_reservation_system
        main.cpp
        Base64.cpp
        HTTP Request.cpp
        Information Input.cpp
        Sieve Information.cpp
        include/Base64.h
        include/HTTP Request.h
        include/Information Input.h
        include/Sieve Information.h
        include/User URL.h
)