#pragma once
#include "Vector3.h"
class VortexFilament
{
private:
	Vector3 start;
	Vector3 end;
	float strength;
public:
    Vector3 getStart() const {
        return start;
    }
    Vector3 getEnd() const {
        return end;
    }
    float getStr() const {
        return strength;
    }
    void setStart(Vector3 value) {
        start = value;
    }
    void setEnd(Vector3 value) {
        end = value;
    }
    void setStr(float value) {
        strength = value;
    }

	VortexFilament();
	VortexFilament(float x1, float y1, float z1, float x2, float y2, float z2, float str);
    VortexFilament(Vector3 st, Vector3 nd, float str);


	Vector3 inducedVel(Vector3 r);

    std::string toStr();
};

