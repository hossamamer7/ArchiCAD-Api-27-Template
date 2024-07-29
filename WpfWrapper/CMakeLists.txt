cmake_minimum_required(VERSION 3.17)

project(WpfWrapper)

set(CMAKE_CXX_STANDARD 17)

# Include necessary directories
include_directories(${CMAKE_SOURCE_DIR}/WpfWrapper)

# Add source files
set(SOURCES
    app.ico
    app.rc
    AssemblyInfo.cpp
    WpfWrapper.cpp
    WpfWrapperBridge.cpp
    pch.cpp
)

# Add the WPF wrapper as a shared library (DLL)
add_library(WpfWrapper SHARED ${SOURCES})

# Specify additional properties for WPF
set_target_properties(WpfWrapper PROPERTIES
    COMMON_LANGUAGE_RUNTIME "clr"
    VS_DOTNET_TARGET_FRAMEWORK_VERSION "v4.8"
)

# Reference necessary .NET assemblies
set_target_properties(WpfWrapper PROPERTIES
    VS_DOTNET_REFERENCES "System;WindowsBase;PresentationCore;PresentationFramework"
)

# Ensure CLR support
target_compile_options(WpfWrapper PRIVATE "/clr")

# Set the output directory for the WpfWrapper library
set_target_properties(WpfWrapper PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/EU Chek/27/INT/WpfWrapper/Debug"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/EU Chek/27/INT/WpfWrapper/Release"
)
