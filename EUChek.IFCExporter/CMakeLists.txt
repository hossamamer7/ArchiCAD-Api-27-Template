cmake_minimum_required(VERSION 3.17)

project(EUChek.IFCExporter)

set(CMAKE_CXX_STANDARD 17)

# Include necessary directories
include_directories(${CMAKE_SOURCE_DIR}/UI)

# Add source files
set(SOURCES
    UI/Windows/MainWindow.xaml.cpp
    UI/Windows/MainWindow.xaml.h
    UI/Windows/MainWindow.xaml
)

# Add the WPF project as a library
add_library(EUChek.IFCExporter SHARED ${SOURCES})

# Specify additional properties for WPF
set_target_properties(EUChek.IFCExporter PROPERTIES
    VS_DOTNET_TARGET_FRAMEWORK_VERSION "v4.8"
)

# Set the output directory for the WPF DLL
set_target_properties(EUChek.IFCExporter PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/EU Chek/27/INT/Debug"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/EU Chek/27/INT/Release"
)
