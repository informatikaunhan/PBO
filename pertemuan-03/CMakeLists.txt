cmake_minimum_required(VERSION 3.16)
project(PBO301_Pertemuan03 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(simplestring src/SimpleString.cpp)
target_include_directories(simplestring PUBLIC include)
target_compile_options(simplestring PRIVATE -Wall -Wextra -pedantic)

add_executable(pbo301_p3 src/main.cpp)
target_link_libraries(pbo301_p3 PRIVATE simplestring)
target_compile_options(pbo301_p3 PRIVATE -Wall -Wextra -pedantic)

enable_testing()
add_executable(test_simplestring tests/test_simplestring.cpp)
target_link_libraries(test_simplestring PRIVATE simplestring)
target_compile_options(test_simplestring PRIVATE -Wall -Wextra -pedantic)
add_test(NAME SimpleStringRuleOfThree COMMAND test_simplestring)
