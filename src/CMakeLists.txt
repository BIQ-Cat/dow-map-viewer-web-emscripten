file(GLOB sources "*.cpp")

find_package(SDL2 REQUIRED)
find_package(VectorVoxel REQUIRED)

add_executable(DowMapViewerWeb)
target_sources(DowMapViewerWeb ${sources})
target_link_libraries(DowMapViewerWeb SDL2 ParserSGB VectorVoxel)
