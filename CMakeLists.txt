project(hotrod)

cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

add_definitions(-std=c++11)

find_package(Daylite REQUIRED)
find_package(BsonBind REQUIRED)

add_bson_binds(BSON_BIND_INCLUDES wheel_state.bsonbind wheel_calibration.bsonbind wheel_states.bsonbind)

include_directories(${DAYLITE_INCLUDE_DIRS} ${CMAKE_BINARY_DIR})
add_executable(hotrod hotrod.cpp ${BSON_BIND_INCLUDES})
target_link_libraries(hotrod ${DAYLITE_LIBRARIES})
