#pragma once
#include <string>

class Vector3
{
private:
	float x;
	float y;
	float z;
	float magnitude;

public:
	float getX() const {
		return x;
	}
	float getY() const {
		return y;
	}
	float getZ() const {
		return z;
	}
	void setX(float value) {
		x = value;
	}
	void setY(float value) {
		y = value;
	}
	void setZ(float value) {
		z = value;
	}

	Vector3();
	Vector3(float iX, float iY, float iZ);

	float mag();

	float dot(Vector3 const& obj);
	Vector3 cross(Vector3 const& obj);

	Vector3 operator+(Vector3 const& obj);
	Vector3 operator-(Vector3 const& obj);
	Vector3 operator/(float const& obj);
	Vector3 operator*(float const& obj);

	std::string toStr();



};

