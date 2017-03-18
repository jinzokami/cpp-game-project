#ifndef WINDOW
#define WINDOW

#include "SDL\SDL.h"

struct Window
{
	int width;
	int height;

	Window(int width, int height, const char* title);
	~Window();

	void update();

	SDL_Surface* getSurface();

private:
	SDL_Window* window;
};
#endif