cmake_minimum_required(VERSION 3.8)
project(githubapicpp)

set(CMAKE_CXX_STANDARD 11)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/Modules")

set(HEADER_FILES
        include/GitHubAPI.h src/CURLUtils.h include/Organization.h include/Repository.h
        src/JSonUtils.h)
set(CPP_FILES
        include/GitHubAPI.cpp include/User.h include/User.cpp src/CURLUtils.cpp
        include/Organization.cpp include/Repository.cpp src/JSonUtils.cpp)
set(TEST_FILES test/TestGitHubAPI.cpp)
add_library(${PROJECT_NAME} ${CPP_FILES})

install(TARGETS ${PROJECT_NAME} DESTINATION /usr/local/lib)
install(DIRECTORY
        ${CMAKE_SOURCE_DIR}/include/
        DESTINATION /usr/local/include/${PROJECT_NAME}
        FILES_MATCHING PATTERN "*.h*")

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

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

# TESTS
add_executable(test_github_api ${TEST_FILES})
target_include_directories(test_github_api PRIVATE ${Boost_INCLUDE_DIRS})
target_compile_definitions(test_github_api PRIVATE "BOOST_TEST_DYN_LINK=1")
target_link_libraries(test_github_api boost_unit_test_framework githubapicpp)
add_test(NAME test_api COMMAND test_github_api)