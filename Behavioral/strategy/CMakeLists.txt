cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
message("${CMAKE_CXX_COMPILER}")
set(CMAKE_BUILD_TYPE Debug)
project(Battle-Game VERSION 1.0.0)
include_directories(Battle-Game
    code
    code/attacks
    code/character
    code/weapons
)

set(SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/code/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/character/Character.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/attacks/RegularKick.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/attacks/RegularPush.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/weapons/Weapon.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/weapons/WeaponX.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/weapons/WeaponY.cpp"
)

add_executable(Battel-Game ${SOURCES})