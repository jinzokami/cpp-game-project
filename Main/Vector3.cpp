#include "Vector3.hpp"

Vector3::Vector3()
{
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator+(Vector3 otherVec)
{
	return Vector3(x + otherVec.x, y + otherVec.y, z + otherVec.z);
}

Vector3 Vector3::operator-(Vector3 otherVec)
{
	return Vector3(x - otherVec.x, y - otherVec.y, z - otherVec.z);
}

Vector3 Vector3::operator*(float scalar)
{
	return Vector3(x*scalar, y*scalar, z*scalar);
}

Vector3 Vector3::operator/(float scalar)
{
	return Vector3(x * (1 / scalar), y * (1 / scalar), z * (1/scalar));
}
