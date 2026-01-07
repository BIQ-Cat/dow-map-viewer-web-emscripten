file(GLOB hdrs "*.h")
file(GLOB srcs "*.cpp")

find_package(SDL2 REQUIRED)
find_package(VectorVoxel REQUIRED)

add_executable(DowMapViewer)
target_sources(DowMapViewer PRIVATE ${hdrs} ${srcs})
if(DEFINED EMSCRIPTEN)
  target_compile_options(DowMapViewer PRIVATE "-s USE_SDL=2 -s WASM=1 -O2")
  target_link_options(DowMapViewer PRIVATE "-s USE_SDL=2 -O2")
endif()
