cmake_minimum_required(VERSION 4.0)

project(MarketSim VERSION 1.0.0 
        LANGUAGES CXX
        DESCRIPTION "MarketSim is a simulation framework for financial markets.")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Makes it a hard req for the compiler to support C++17
set(CMAKE_CXX_EXTENSIONS OFF) # Disables compiler-specific extensions to ensure portability (e.g., no GNU extensions)

add_executable(MarketSim src/main.cpp src/Market.cpp src/Listing.cpp)
# Add add_executable(tests _____) here later when implementing unit tests
target_include_directories(MarketSim PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)



### BUILD PROCESS ###
# cmake -S . -B build (-S . means source directory, -B build means build directory)
# cmake --build build --config Release (-config Release means build type is Release, leave that off unless needed)