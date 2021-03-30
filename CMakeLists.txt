cmake_minimum_required(VERSION 3.1)

project(EpicGame)

option(BUILD_SHARED_LIBS "" ON)
add_subdirectory(lib/SDL)

set(SOURCE_DIR ./src)

file(GLOB EPIC_GAME_SOURCES
	${SOURCE_DIR}/*.c
	${SOURCE_DIR}/*.h
    ${SOURCE_DIR}/*.cpp
    )

#set(EPIC_GAME_SOURCES
#	${SOURCE_DIR}/main.cpp
#	)

add_executable(epic_game ${EPIC_GAME_SOURCES})
target_include_directories(epic_game PRIVATE lib/SDL/include)
target_link_libraries(epic_game SDL2)

