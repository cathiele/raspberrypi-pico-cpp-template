cmake_minimum_required(VERSION 3.13)

set(NAME projectname)

include(pico_sdk_import.cmake)

project(projectname C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/assembler.S
)

target_link_libraries(${PROJECT_NAME} pico_stdlib)

pico_add_extra_outputs(${PROJECT_NAME})

install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.uf2
    ${CMAKE_CURRENT_LIST_DIR}/README.md
    DESTINATION .
)
