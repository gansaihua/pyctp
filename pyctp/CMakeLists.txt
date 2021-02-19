cmake_minimum_required(VERSION 3.11)

set(CMAKE_TOOLCHAIN_FILE "C:/dev/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(pyctp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-bigobj)

set(Python_ROOT_DIR "C:/dev/Python/Python38")
find_package(Python COMPONENTS Interpreter Development)

set(pybind11_DIR "C:/dev/vcpkg/installed/x64-windows/share/pybind11")
find_package(pybind11 CONFIG REQUIRED)

file(GLOB SRC_FILES "src/*.cpp")
add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".pyd")

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/ctp")
target_link_libraries(${PROJECT_NAME} 
	PRIVATE Python::Python
	PRIVATE pybind11::pybind11
	PUBLIC "${CMAKE_SOURCE_DIR}/ctp/thostmduserapi_se.lib"
	PUBLIC "${CMAKE_SOURCE_DIR}/ctp/thosttraderapi_se.lib"
)
