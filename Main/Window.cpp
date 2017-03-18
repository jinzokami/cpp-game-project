#include "Window.hpp"

Window::Window(int width, int height, const char* title = "")
{
	this->width = width;
	this->height = height;
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
}

Window::~Window()
{
	SDL_DestroyWindow(window);
}

void Window::update()
{
	SDL_UpdateWindowSurface(window);
}

SDL_Surface* Window::getSurface()
{
	return SDL_GetWindowSurface(window);
}

