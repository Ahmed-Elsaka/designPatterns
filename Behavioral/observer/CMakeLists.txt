cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
set (CMAKE_CXX_STANDARD 11)
project(chatroom)

include_directories(chatroom
    code/ChatRoom
    code/User
)

set (SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/code/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/ChatRoom/IChatRoom.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/ChatRoom/ChatRoom.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/User/IUser.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/code/User/User.cpp"
)

add_executable(chatroom ${SOURCES})