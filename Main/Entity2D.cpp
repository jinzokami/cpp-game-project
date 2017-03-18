#include "Entity2D.hpp"

Entity2D::Entity2D()
{
}

Entity2D::Entity2D(float x, float y, Sprite spr, Input * input)
{
	sprite = spr;
	position = Vector2(x, y);
}

void Entity2D::update()
{
}

void Entity2D::draw(Graphics* g)
{
}
