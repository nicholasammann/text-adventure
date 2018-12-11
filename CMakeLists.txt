cmake_minimum_required(VERSION 3.10.3 FATAL_ERROR)

project(text-adventure CXX C)

set(cmake_dir ${CMAKE_CURRENT_LIST_DIR}/cmake)
set(src_dir ${CMAKE_CURRENT_LIST_DIR}/src)

set(build_type $<$<CONFIG:Debug>:Debug>$<$<CONFIG:Release>:Release>)

set(build_out ${CMAKE_CURRENT_LIST_DIR}/build/${build_type})

# Include funtion for mimicking folder structure
include(${cmake_dir}/YTE_Source_Group.cmake)

add_subdirectory(src)
