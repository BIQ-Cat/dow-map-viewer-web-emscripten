file(GLOB sources "*.cpp")

add_library(ParserSGB SHARED)
target_sources(ParserSGB PRIVATE ${sources})
