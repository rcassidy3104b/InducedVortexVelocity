#include "Vector3.h"
#include "VortexFilament.h"
#include <iostream>

int main() {
    VortexFilament myFilament = VortexFilament(Vector3(-1, 0, 0), Vector3(1, 0, 0), 1);
    Vector3 st = Vector3(-20, 5, 0);
    Vector3 nd = Vector3(20, 5, 0);
    Vector3 trk = (nd - st).norm();

    Vector3 pt;

    for (int i = 0; i <= 40; i++) {
        pt = st + (trk * i);
        std::cout << ((myFilament.inducedVel(pt)).toStr())<<std::endl;
    }

    return 0;
}