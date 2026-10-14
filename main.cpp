#include <iostream>
#include <cmath>
#include "Coulomb.hpp"

int main(){
    Coulomb coulomb_calculator;
    double q1 = 1.6e-19;
    double q2 = 3.2e-19;
    double q3 = 3.2e-19;
    double q4 = 3.2e-19;

    double r12 = 0.02;
    double r14 = (3.00/4.00) * r12;

    double force_12 = coulomb_calculator.get_coulomb_force(q1, true, q2, true, r12);
    double force_12_x = coulomb_calculator.get_coulomb_force_xcomponent(force_12, 0);
    double force_12_y = coulomb_calculator.get_coulomb_force_ycomponent(force_12, 0);
    std::cout << "force 12 info: " << '\n' << force_12 << '\n' << force_12_x << '\n' << force_12_y << "\n\n";

    double force_14 = coulomb_calculator.get_coulomb_force(q1, true, q4, false, r14);
    double force_14_x = coulomb_calculator.get_coulomb_force_xcomponent(force_14, 60);
    double force_14_y = coulomb_calculator.get_coulomb_force_ycomponent(force_14, 60);
    std::cout << "force 14 info: " << '\n' << force_14 << '\n' << force_14_x << '\n' << force_14_y << "\n\n";

    double force_124_x = force_12_x + force_14_x;
    double force_124_y = force_12_y + force_14_y;
    std::cout << "force 124 component info: " << '\n' << force_124_x << '\n' << force_124_y << "\n\n";

}
