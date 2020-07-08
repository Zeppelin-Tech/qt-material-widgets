project(qt-material-examples)

include_directories(${qt-material-components_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCE_FILES "*.cpp" "*.h")
qt5_add_resources(RC_SRC "examples.qrc")

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${RC_SRC})

target_link_libraries(${PROJECT_NAME} qt-material-components)
target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Gui)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
