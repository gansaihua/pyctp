cmake_minimum_required(VERSION 3.17)

project(pyctp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-bigobj)

file(GLOB SRC_FILES "src/*.cpp")

add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".pyd")

find_package(Python COMPONENTS Interpreter Development)
target_link_libraries(${PROJECT_NAME} PRIVATE Python::Python)

find_package(pybind11 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE pybind11::pybind11)

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(${PROJECT_NAME} 
	PUBLIC "${CMAKE_SOURCE_DIR}/lib/ctp/thostmduserapi_se.lib"
	PUBLIC "${CMAKE_SOURCE_DIR}/lib/ctp/thosttraderapi_se.lib"
)
