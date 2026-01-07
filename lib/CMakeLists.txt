file(GLOB hdrs "*.h")
file(GLOB srcs "*.cpp")

add_library(ParserSGB SHARED ${srcs} ${hdrs})
