file(GLOB hdrs "*.h") # команда для работы с файлами
file(GLOB srcs "*.cpp")

add_library(ParserSGB STATIC ${srcs} ${hdrs})
