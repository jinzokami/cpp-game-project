#ifndef SPRITE
#define SPRITE
#include "SDL/SDL.h"

#include "Graphics.hpp"
#include "Image.hpp"

struct Sprite
{
	float x;
	float y;
	float w;
	float h;

	Sprite();
	Sprite(const char* imgPath);
	Sprite(const char* imgPath, float x, float y);
	Sprite(const char* imgPath, float x, float y, float w, float h);
	Sprite(Image* image);
	Sprite(Image* image, float x, float y);
	Sprite(Image* image, float x, float y, float w, float h);
	~Sprite();

	void draw(Graphics* g);

	Image* image;
};
#endif