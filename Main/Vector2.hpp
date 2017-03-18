#ifndef VECTOR_2
#define VECTOR_2

struct Vector2 {
	float x;
	float y;

	Vector2();
	Vector2(float x, float y);

	Vector2 operator + (Vector2 otherVec);
	Vector2 operator - (Vector2 otherVec);
	Vector2 operator * (float scalar);
	Vector2 operator / (float scalar);
};

#endif