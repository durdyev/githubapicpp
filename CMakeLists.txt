cmake_minimum_required(VERSION 3.8)
project(githubapicpp)

set(CMAKE_CXX_STANDARD 11)

set(HEADER_FILES
        include/GitHubAPI.h src/CURLUtils.h)
set(CPP_FILES
        include/GitHubAPI.cpp include/User.h include/User.cpp src/CURLUtils.cpp)
add_library(${PROJECT_NAME} ${CPP_FILES})

install(TARGETS ${PROJECT_NAME} DESTINATION /usr/local/lib)
install(DIRECTORY
        ${CMAKE_SOURCE_DIR}/include/
        DESTINATION /usr/local/include/${PROJECT_NAME}
        FILES_MATCHING PATTERN "*.h*")

if (APPLE)
    set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME} SUFFIX ".dylib")
endif()

if (UNIX AND NOT APPLE)
    set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME} SUFFIX ".so")
endif()

if (WIN32)
    set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME} SUFFIX ".dll")
endif()

target_link_libraries(githubapicpp curl)