#include "Input.hpp"

Input::Input()
{
}

Input::~Input()
{
}

void Input::update()
{
	for (auto kv : wasUpdated) {
		if (!kv.second) {
			prev_keys[kv.first] = keys[kv.first];
		}
	}
}

bool Input::isKeyPressed(SDL_Keycode key)
{
	return keys[key] & !prev_keys[key];
}

bool Input::isKeyReleased(SDL_Keycode key)
{
	return !keys[key] & prev_keys[key];
}

bool Input::isKeyDown(SDL_Keycode key)
{
	return keys[key];
}

void Input::keyPressed(SDL_Keycode key)
{
	prev_keys[key] = keys[key];
	keys[key] = true;
	wasUpdated[key] = true;
}

void Input::keyReleased(SDL_Keycode key)
{
	prev_keys[key] = keys[key];
	keys[key] = false;
	wasUpdated[key] = true;
}
