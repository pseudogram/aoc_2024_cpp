set(SRC_FILES aoc.cpp)
set(PROJECT_EXECUTABLE aoc.tsk)
set(SRC_LIB src_lib) # name of the src_lib

# configure_file(codeConfig.h.in codeConfig.h)

add_executable(${PROJECT_EXECUTABLE} main.cpp)

add_library(${SRC_LIB} STATIC ${SRC_FILES})

target_include_directories(${SRC_LIB} INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_EXECUTABLE} ${SRC_LIB})
