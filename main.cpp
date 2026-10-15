#include <iostream>
#include <cmath>

#include "Coulomb.hpp"
#include "ElectricField.hpp"
#include "Capacitance.hpp"
#include "GaussLaw.hpp"
#include "ElectricPotential.hpp"
#include "CurrentResistance.hpp"


int main(){
    Coulomb coulomb_calculator;
    ElectricField field_calculator;
    Capacitance capacitance_calculator;
    GaussLaw gauss_calculator;
    ElectricPotential potential_calculator;
    CurrentResistance currentresistance_calculator;

    double get_magnitude_force_12 = coulomb_calculator.get_force_charge1_charge2_distance(false, 1.6e-19, 3.2e-19, 0.02);
    std::cout << get_magnitude_force_12 << '\n';
}
