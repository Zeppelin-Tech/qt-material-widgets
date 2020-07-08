project(qt-material-components)

include_directories("./")

file(GLOB_RECURSE SOURCE_FILES "*.cpp" "*.h")
qt5_add_resources(RC_SRC "resources.qrc")

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES} ${RC_SRC})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

set(${PROJECT_NAME}_INCLUDE_DIRS ${PROJECT_SOURCE_DIR} CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)
