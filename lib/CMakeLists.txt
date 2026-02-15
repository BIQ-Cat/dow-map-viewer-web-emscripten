file(GLOB hdrs "*.h")
file(GLOB srcs "*.cpp")

add_library(ParserSGB STATIC ${srcs} ${hdrs})
target_link_libraries(ParserSGB PRIVATE VectorVoxel::core)
