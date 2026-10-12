#include <iostream>
#include <cmath>
#include "Coulomb.hpp"

int main(){
    Coulomb coulomb_calculator;
    float q1 = 1.6e-19f;
    float q2 = 3.2e-19f;
    float r = 0.02;
    float force_12 = coulomb_calculator.get_coulomb_force(q1, q2, r);
    std::cout << force_12;
}
