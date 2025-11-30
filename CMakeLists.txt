cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(CPCD VERSION 0.1.2 LANGUAGES CXX)

if(_WIN32)
    set(OS_TYPE "Windows")
elseif(UNIX AND NOT APPLE)
    set(OS_TYPE "Linux")
endif()

add_executable(CPCD WIN32 main.cpp)

if(MSVC)
    target_compile_options(CPCD PRIVATE /O2 /GL /W4 /utf-8)
    target_link_options(CPCD PRIVATE /LTCG)
    source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES main.cpp)
else()
    target_compile_options(CPCD PRIVATE -O2 -march=native)
endif()

if(WIN32)
    set_target_properties(CPCD PROPERTIES OUTPUT_NAME "CPCD")
    target_link_libraries(CPCD -static-libgcc -static-libstdc++ -static)
endif()

if(OS_TYPE STREQUAL "Windows")
    add_custom_command(TARGET CPCD
            POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E echo "Executable built for Windows"
    )
elseif(OS_TYPE STREQUAL "Linux")
    add_custom_command(TARGET CPCD
            POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E echo "Executable built for Linux"
    )
endif()
