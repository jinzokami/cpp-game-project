#ifndef INPUT
#define INPUT

#include <unordered_map>
#include <vector>

#include "SDL\SDL.h"

struct Input {
	Input();
	~Input();
	
	//updates the keys that have not been manually updated this frame
	void update();

	//returns whether the passed in key was pressed, released, or held this frame
	bool isKeyPressed(SDL_Keycode key);//current frame must be true previous frame must be false
	bool isKeyReleased(SDL_Keycode key);//current frame must be false previous frame must be true
	bool isKeyDown(SDL_Keycode key);//this one doesn't care about previous occurences

	//sets the passed in key as pressed, released or held this frame
	void keyPressed(SDL_Keycode key);
	void keyReleased(SDL_Keycode key);
	
private:
	bool isSet2;
	//holds the keys and their information
	std::unordered_map<SDL_Keycode, bool> keys;
	std::unordered_map<SDL_Keycode, bool> prev_keys;
	std::unordered_map<SDL_Keycode, bool> wasUpdated;
};

#endif