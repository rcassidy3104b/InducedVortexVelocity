#include "VortexFilament.h"

VortexFilament::VortexFilament()
{
	start = Vector3();
	end = Vector3();
	strength = 0;
}

VortexFilament::VortexFilament(float x1, float y1, float z1, float x2, float y2, float z2, float str)
{
	start = Vector3(x1, y1, z1);
	end = Vector3(x2, y2, z2);
	strength = str;
}

VortexFilament::VortexFilament(Vector3 st, Vector3 nd, float str)
{
	start = st;
	end = nd;
	strength = str;
}

Vector3 VortexFilament::inducedVel(Vector3 r)
{
	Vector3 a = start - r;
	Vector3 b = end - r;
	Vector3 axb = a.cross(b);
	Vector3 q = (axb / (axb.dot(axb))) * (a.mag() + b.mag()) * (1 - (a.dot(b) / (a.mag() * b.mag())));
	return q* (0.07957747154*strength);
}

std::string VortexFilament::toStr()
{
	return "Start: "+ start.toStr()+"\nEnd:" + end.toStr()+"\nStrength:"+ std::to_string(strength);
}
