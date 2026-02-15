cmake_minimum_required(VERSION 3.25)

project(dow_map_viewer_web)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(VECTORVOXEL_BUILD_SDL_BACKEND ON)
set(VECTORVOXEL_BUILD_BASIC_BACKENDS OFF)
set(VECTORVOXEL_BUILD_EXAMPLES OFF)
set(VECTORVOXEL_BUILD_TESTS OFF)

include(FetchContent)
FetchContent_Declare(
  VectorVoxel
  GIT_REPOSITORY https://github.com/biq-cat/vectorvoxel
  GIT_TAG v2.0-beta)

FetchContent_MakeAvailable(VectorVoxel)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_subdirectory(lib)
add_subdirectory(src)
