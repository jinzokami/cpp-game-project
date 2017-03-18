#include <iostream>

#include "SDL\SDL.h"

#include "Window.hpp"
#include "Graphics.hpp"
#include "Sprite.hpp"
#include "Input.hpp"
#include "Timer.hpp"

static const double TARGET_DELTA = 1.0 / 120.0;
/*
NOTES FOR FUTURE ME:
Avoid circular dependencies(Sprite included Graphics included Sprite).
Avoid infinite loops with no way to escape (update loop was infinite).
Add features when needed(testing things out is cool, but don't go crazy).
Worry about one feature at a time(don't work on sprites and halfway through switch to entities).
*/

/*
FEATURES NOT IMPLEMENTED(i add them as they come to me):
OpenGL Rendering
--GRANULARITY DIVIDER(these features are more specific than the ones before them and usually rely on them too)
Collision Detection
Physics/Collision Resolution

FEATURES CURRENTLY BEING WORKED ON:
Entities

FEATURES WORKING:
Game Loop
Sprites - Not really a "sprite" yet now we have to mess with rects and animations
Window
Graphics
Input
Timer

FEATURES FINISHED:

*/

int main(int argc, char** argv)
{
	Timer timer;
	SDL_Init(SDL_INIT_EVERYTHING);
	
	Window* window = new Window(800, 600, "SDL Window");
	Graphics* graphics = new Graphics(window);
	Input* input = new Input();

	Sprite* nSprite = new Sprite("res/Mitsuru.bmp", 32, 32, 128, 128);

	double lag = 0;
	bool running = true;
	while (running) {
		//input & events
		SDL_Event e;
		while (SDL_PollEvent(&e) != 0)
		{
			switch (e.type)
			{
			case SDL_QUIT:
				running = false;
				break;
			case SDL_KEYDOWN:
				input->keyPressed(e.key.keysym.sym);
				break;
			case SDL_KEYUP:
				input->keyReleased(e.key.keysym.sym);
				break;
			}
		}
		input->update();

		//update
		timer.update();
		lag += timer.getElapsedTime();
		while (lag >= TARGET_DELTA) {
			//update entities & physics
			lag -= TARGET_DELTA;
		}
		
		//render
		nSprite->draw(graphics);
		window->update();
	}
	
	delete graphics;
	delete window;
	delete input;
	
	SDL_Quit();

	return 0;
}