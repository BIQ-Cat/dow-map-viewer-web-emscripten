file(GLOB hdrs "*.h")
file(GLOB srcs "*.cpp")

add_executable(DowMapViewer)
target_sources(DowMapViewer PRIVATE ${hdrs} ${srcs})
