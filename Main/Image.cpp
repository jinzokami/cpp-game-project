#include "Image.hpp"

Image::Image()
{
	image = SDL_LoadBMP("res/default.bmp");
}

Image::Image(const char* imgPath)
{
	image = SDL_LoadBMP(imgPath);
}


Image::~Image()
{
	SDL_FreeSurface(image);
}