#include <iostream>

int main() {
    int chickenLegs = XX;
    int duckLegs = YY;
    int totalLegs = ZZ;

    if (totalLegs % chickenLegs == 0) {
        if (totalLegs % duckLegs == 0) {
            std::cout << "ANY" << std::endl;
        } else {
            std::cout << "CHICKEN" << std::endl;
        }
    } else if (totalLegs % duckLegs == 0) {
        std::cout << "DUCK" << std::endl;
    } else {
        std::cout << "NONE" << std::endl;
    }

    return 0;
}
