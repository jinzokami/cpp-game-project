#ifndef IMAGE
#define IMAGE

#include "SDL\SDL.h"

struct Image {
	Image();
	Image(const char* imgPath);
	~Image();

	SDL_Surface* image;
};

#endif