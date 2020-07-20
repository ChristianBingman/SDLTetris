#pragma once
#include "SDL2/SDL.h"

class Map
{
private:
    SDL_Rect src, dest;

    SDL_Texture* dirt;
    SDL_Texture* grass;
    SDL_Texture* water;

    int map[20][25];

public:
    Map();
    ~Map();

    void LoadMap(int arr[20][25]);
    void DrawMap();
};
