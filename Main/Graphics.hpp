#ifndef GRAPHICS
#define GRAPHICS

#include "SDL/SDL.h"

#include "Window.hpp"

struct Graphics
{
	SDL_Surface* screen;

	Graphics(Window* window);
	~Graphics();

	void draw(SDL_Surface* surface);
	void draw(SDL_Surface* surface, float x, float y);
	void draw(SDL_Surface* surface, float x, float y, float w, float h);
};
#endif