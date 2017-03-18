#ifndef ENTITY_2D
#define ENTITY_2D

#include "Sprite.hpp"
#include "Vector2.hpp"
#include "Input.hpp"
#include "Graphics.hpp"

struct Entity2D {
	Vector2 position;
	Vector2 velocity;
	Vector2 rotation;
	Vector2 rotational_velocity;

	Sprite sprite;

	Input* input;

	Entity2D();
	Entity2D(float x, float y, Sprite spr, Input* input);

	void update();
	void draw(Graphics* g);
};

#endif