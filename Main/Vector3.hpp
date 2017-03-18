#ifndef VECTOR_3
#define VECTOR_3

struct Vector3 {
	float x;
	float y;
	float z;

	Vector3();
	Vector3(float x, float y, float z);

	Vector3 operator + (Vector3 otherVec);
	Vector3 operator - (Vector3 otherVec);
	Vector3 operator * (float scalar);
	Vector3 operator / (float scalar);
};

#endif