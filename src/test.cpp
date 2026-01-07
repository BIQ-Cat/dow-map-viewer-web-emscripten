#include <iostream>
#ifdef _WIN32
#include "SDL.h"
#else
#include <SDL2/SDL.h>
#endif // _WIN32

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#include <emscripten/fetch.h>
#else
#include <fstream>
#include <ios>
#endif // __EMSCRIPTEN__

#include <vectorvoxel/vectorvoxel.h>

int main() {
  SDL_Window *window{};
  SDL_Surface *surface{};
  VectorVoxel::Screen screen_3d(M_PI / 2, 2000, 800, 450);

#ifdef __EMSCRIPTEN__
#else
  std::string filename;
  std::cout << "Set file path: ";
  std::cin >> filename;
  std::ifstream file(filename, std::ios::binary);
  if (!file) {
    std::cout << "Couldn't open file!";
    return 1;
  }

  file.seekg(0, std::ios::end);
  int file_size = file.tellg();
  file.seekg(0, std::ios::beg);

  char *data = new char[file_size + 1];
  file.read(data, file_size);
  data[file_size] = '\0';
  // TODO: parse data

#endif // __EMSCRIPTEN__
  SDL_Init(SDL_INIT_VIDEO);

  window =
      SDL_CreateWindow("Dow Map Viewer", SDL_WINDOWPOS_UNDEFINED,
                       SDL_WINDOWPOS_UNDEFINED, 800, 450, SDL_WINDOW_SHOWN);
  if (window == nullptr) {
    std::cout << "Error initializing window" << SDL_GetError() << std::endl;
    return 1;
  }
}
