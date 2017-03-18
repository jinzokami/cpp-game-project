#include "Graphics.hpp"

Graphics::Graphics(Window* window)
{
	screen = window->getSurface();
}


Graphics::~Graphics()
{
}

void Graphics::draw(SDL_Surface * surface)
{
	SDL_BlitSurface(surface, NULL, screen, NULL);
}

void Graphics::draw(SDL_Surface * surface, float x, float y)
{
	SDL_Rect rect;
	rect.x = x;
	rect.y = y;
	rect.w = surface->w;
	rect.h = surface->h;
	SDL_BlitSurface(surface, &rect, screen, NULL);
}

void Graphics::draw(SDL_Surface * surface, float x, float y, float w, float h)
{
	SDL_Rect rect;
	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;
	SDL_BlitSurface(surface, &rect, screen, NULL);
}
