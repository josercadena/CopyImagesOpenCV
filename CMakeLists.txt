cmake_minimum_required(VERSION 2.8.1)

project( CopyImages)
find_package ( OpenCV REQUIRED )

set( CMake_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -O3 -Wall -DWITH_PRINTS ")
include_directories( ${OpenCV_INCLUDE_DIRS})
add_executable( CopyImages main.cpp)

target_link_libraries(
	CopyImages
	${OpenCV_LIBS}
)
