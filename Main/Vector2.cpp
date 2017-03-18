#include "Vector2.hpp"

Vector2::Vector2()
{
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2 Vector2::operator+(Vector2 otherVec)
{
	return Vector2(x + otherVec.x, y + otherVec.y);
}

Vector2 Vector2::operator-(Vector2 otherVec)
{
	return Vector2(x - otherVec.x, y - otherVec.y);
}

Vector2 Vector2::operator*(float scalar)
{
	return Vector2(x*scalar, y*scalar);
}

Vector2 Vector2::operator/(float scalar)
{
	return Vector2(x * (1/scalar), y * (1/scalar));
}
