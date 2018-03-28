cmake_minimum_required(VERSION 3.5)
project(node_imu)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)


rosidl_generate_interfaces(pendulum_msgs
  "msg/imu.msg"
  DEPENDENCIES builtin_interfaces
)


include_directories(SYSTEM ../basis)
include_directories(src ${catkin_INCLUDE_DIRS})

SET(SOURCE_FILES
 src/node_imu.cpp
 src/solution.cpp
)
SET(BASIS
 ../basis/afx.cpp
 ../basis/pkt.cpp
 ../basis/xchain.cpp
 ../basis/xlist.cpp
 ../basis/xlog.cpp
 ../basis/xmd5.cpp
 ../basis/xtime.cpp
 ../basis/xsocket.cpp
 ../basis/xserial.cpp
 ../basis/global.cpp
)

add_executable(node_imu src/main.cpp ${SOURCE_FILES} ${BASIS})
ament_target_dependencies(node_imu rclcpp std_msgs)
target_link_libraries(node_imu ${catkin_LIBRARIES})

install(TARGETS
  node_imu
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
