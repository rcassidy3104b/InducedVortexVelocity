#include "Vector3.h"
#include <cmath>
#include <format>


Vector3::Vector3() {
	x = 0;
	y = 0;
	z = 0;
	magnitude = 0;
}

Vector3::Vector3(float iX, float iY, float iZ)
{
	x = iX;
	y = iY;
	z = iZ;
	magnitude = sqrt(x * x + y * y + z * z);;
}

float Vector3::mag()
{
	return magnitude;
}

float Vector3::dot(Vector3 const& obj)
{
	return (x*obj.x+y*obj.y+z*obj.z);
}

Vector3 Vector3::cross(Vector3 const& obj)
{
	return Vector3(y * obj.z - z * obj.y, z * obj.x - x * obj.z, x * obj.y - y * obj.x);
}



Vector3 Vector3::operator+(Vector3 const& obj)
{
	Vector3 res;
	res.x = x + obj.x;
	res.y = y + obj.y;
	res.z = z + obj.z;
	return res;
}

Vector3 Vector3::operator-(Vector3 const& obj)
{
	Vector3 res;
	res.x = x - obj.x;
	res.y = y - obj.y;
	res.z = z - obj.z;
	return res;
}

Vector3 Vector3::operator/(float const& obj)
{
	return Vector3(x/obj, y / obj, z / obj);
}

Vector3 Vector3::operator*(float const& obj)
{
	return Vector3(x * obj, y * obj, z * obj);
}

std::string Vector3::toStr()
{
	return "["+std::to_string(std::trunc(100 * x) / 100) + "," + std::to_string(std::trunc(100 * y) / 100) +","+ std::to_string(std::trunc(100 * z) / 100) +"]";
}
