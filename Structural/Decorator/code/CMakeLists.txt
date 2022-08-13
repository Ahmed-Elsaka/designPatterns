cmake_minimum_required(VERSION 3.15)
project(cofeeMachine)
# no need to add include dirs.
set(SOURCES 
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"    
    "${CMAKE_CURRENT_SOURCE_DIR}/IBeverage.cpp"    
    "${CMAKE_CURRENT_SOURCE_DIR}/IAddonDocorator.cpp"    
    "${CMAKE_CURRENT_SOURCE_DIR}/Expresso.cpp"    
    "${CMAKE_CURRENT_SOURCE_DIR}/Decoffe.cpp"    
    "${CMAKE_CURRENT_SOURCE_DIR}/FullFatMilk.cpp"    
    "${CMAKE_CURRENT_SOURCE_DIR}/Chocolate.cpp"    
)
add_executable(coffemahince ${SOURCES})