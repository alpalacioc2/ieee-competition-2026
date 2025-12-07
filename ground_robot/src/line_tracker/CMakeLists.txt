cmake_minimum_required(VERSION 3.8)
project(line_tracker)

# Enable compile warnings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(image_transport REQUIRED)
find_package(OpenCV REQUIRED)

# Executable
add_executable(line_tracker_node src/line_tracker_node.cpp)

# Link against ROS 2 and OpenCV
ament_target_dependencies(line_tracker_node
  rclcpp
  sensor_msgs
  cv_bridge
  image_transport
)

target_include_directories(line_tracker_node PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(line_tracker_node ${OpenCV_LIBRARIES})

# Install target
install(TARGETS
  line_tracker_node
  DESTINATION lib/${PROJECT_NAME}
)

# Optional: Linting & Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_cpplint_FOUND TRUE)    # Skip if no copyright
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
