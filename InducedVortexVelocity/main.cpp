#include "Vector3.h"
#include "VortexFilament.h"
#include <iostream>
#include <fstream>

int main() {
    VortexFilament myFilament = VortexFilament(Vector3(-1, 0, 0), Vector3(1, 0, 0), 1);


    //Problem A
    Vector3 st = Vector3(-20, 5, 0);
    Vector3 nd = Vector3(20, 5, 0);
    Vector3 trk = (nd - st).norm();
    Vector3 pt;
    std::ofstream MyFileA("zPointsA.csv");
    for (int i = 0; i <= 40; i++) {
        pt = st + (trk * i);
        MyFileA << pt.getX() <<",";
        MyFileA << ((myFilament.inducedVel(pt)).getZ()) << std::endl;
    }
    MyFileA.close();

    //Problem A Hand
    /*
    Vector3 st = Vector3(-20, 5, 0);
    Vector3 nd = Vector3(20, 5, 0);
    Vector3 trk = (nd - st).norm();
    Vector3 pt;
    pt = Vector3(0, 5, 0);
    std::cout << ((myFilament.inducedVel(pt)).toStr()) << std::endl;
    pt = Vector3(20, 5, 0);
    std::cout << ((myFilament.inducedVel(pt)).toStr()) << std::endl;*/

    //Problem B
    st = Vector3(0, -20, 0);
    nd = Vector3(0, 20, 0);
    trk = (nd - st).norm();
    std::ofstream MyFileB("zPointsB.csv");
    for (int i = 0; i <= 40; i++) {
        pt = st + (trk * i);
        MyFileB << pt.getY() << ",";
        MyFileB << ((myFilament.inducedVel(pt)).getZ()) << std::endl;
    }
    MyFileB.close();

    return 0;
}