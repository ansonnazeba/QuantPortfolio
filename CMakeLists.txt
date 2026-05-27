cmake_minimum_required(VERSION 3.20)

project(QuantPortfolio)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(QuantPortfolio
        src/main.cpp
        src/AssetType.cpp
        src/Asset.cpp
        src/Stock.cpp
        src/Bond.cpp
        src/Cash.cpp
        src/Portfolio.cpp
        src/Utils.cpp
)