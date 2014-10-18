cmake_minimum_required(VERSION 2.8.4)
project(Enten_4_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(TARGET ${PROJECT_NAME})

add_subdirectory(libs/SDL-2)
include_directories(libs/SDL-2/include)

# entgine
include_directories(engine/src)
aux_source_directory(engine/src SOURCE_FILES)

set(SOURCE_FILES
	${SOURCE_FILES}
	src/pcrenderer.h
	src/main.cpp
)
add_executable(${TARGET} ${SOURCE_FILES})

set(LIBS
	SDL2-static
)
target_link_libraries(${TARGET} ${LIBS})