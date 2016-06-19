# CMake version
cmake_minimum_required (VERSION 2.8)

# project
project (dtstream)

LIST(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}")


# Target
INCLUDE_DIRECTORIES(include)
INCLUDE_DIRECTORIES(src)

AUX_SOURCE_DIRECTORY(src SRC_STREAM)
AUX_SOURCE_DIRECTORY(src/plugin SRC_STREAM)
ADD_LIBRARY(dtstream SHARED ${SRC_STREAM})

# target - test
ADD_EXECUTABLE(stream_test test/stream_test.cpp)
TARGET_LINK_LIBRARIES(stream_test dtstream)

INSTALL(TARGETS dtstream
#RUNTIME DESTINATION bin
LIBRARY DESTINATION lib
ARCHIVE DESTINATION lib
)
INSTALL(DIRECTORY include/ DESTINATION /usr/local/include/${PROJECT_NAME})

