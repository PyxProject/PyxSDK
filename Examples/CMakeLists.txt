cmake_minimum_required(VERSION 2.8)

##########################################
# Checks
##########################################

if (CMAKE_GENERATOR MATCHES "Win64")
    set(BUILD_ARCH x64)
else()
    set(BUILD_ARCH x86)
endif()

##########################################
# Globals
##########################################

project("Pyx Samples")

set(CMAKE_CONFIGURATION_TYPES "Release;Debug" CACHE STRING "limited configs" FORCE)
set(CMAKE_BUILD_TYPE "Release;Debug")
set(CMAKE_SKIP_BUILD_RPATH 0)
set(CMAKE_BUILD_WITH_INSTALL_RPATH 0)
set(LIB_LINKAGE SHARED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_definitions(-D_CRT_SECURE_NO_WARNINGS)
add_definitions(-D_SCL_SECURE_NO_WARNINGS)
add_definitions("-D_WIN32_WINNT=0x0601")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")

add_subdirectory(HelloWorld)

