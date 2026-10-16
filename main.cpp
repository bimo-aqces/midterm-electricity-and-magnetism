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

    // double get_magnitude_force_12 = coulomb_calculator.get_force_charge1_charge2_distance(false, 1.6e-19, 3.2e-19, 0.02);
    // std::cout << "magnitude force 12 = "<< get_magnitude_force_12 << "\n";

    // double get_force12_xcomponent = coulomb_calculator.get_coulomb_force_xcomponent(get_magnitude_force_12,true, true, 0);
    // double get_force12_ycomponent = coulomb_calculator.get_coulomb_force_ycomponent(get_magnitude_force_12, true, true, 0);
    // std::cout << "x force 12 = " << get_force12_xcomponent << "\n";
    // std::cout << "y force 12 = " << get_force12_ycomponent << "\n";

    // double get_tetha_force12 = std::atan(get_force12_ycomponent / get_force12_xcomponent);
    // std::cout << "tetha 12 = " << get_tetha_force12 << "\n\n";

    // double get_magnitude_force_13 = coulomb_calculator.get_force_charge1_charge2_distance(false, 1.6e-19, 3.2e-19, 0.015);
    // std::cout << "magnitude force 13 = " << get_magnitude_force_13 << "\n";

    // double get_force13_xcomponent = coulomb_calculator.get_coulomb_force_xcomponent(get_magnitude_force_13, true, false, 0);
    // double get_force13_ycomponent = coulomb_calculator.get_coulomb_force_ycomponent(get_magnitude_force_13, true, false, 0);
    // std::cout << "x force 13 = " << get_force13_xcomponent << "\n";
    // std::cout << "y force 13 = " << get_force13_ycomponent << "\n";

    // double get_tetha_force13 = std::atan(get_force13_ycomponent / get_force13_xcomponent);
    // std::cout << "tetha 13 = " << get_tetha_force13 << "\n\n";

    // double get_force123_xcomponent = get_force12_xcomponent + get_force13_xcomponent;
    // double get_force123_ycomponent = get_force12_ycomponent + get_force13_ycomponent;
    // std::cout << "x force 123 = "<< get_force123_xcomponent  << "\n";
    // std::cout << "y force 123 = " << get_force123_ycomponent << "\n";

    // double get_magnitude_force123 = sqrt(pow(get_force123_xcomponent, 2) + pow(get_force123_ycomponent, 2));
    // std::cout << "magnitude force 123 = " << get_magnitude_force123 << "\n";

    // double get_tetha_force123 = std::atan(get_force123_ycomponent / get_force123_xcomponent);
    // std::cout << "tetha 123 = " << get_tetha_force123 << "\n\n";

    // double get_magnitude_force_14 = coulomb_calculator.get_force_charge1_charge2_distance(false, 1.6e-19, 3.2e-19, 0.015);
    // std::cout << "magnitude force 14 = " << get_magnitude_force_14 << "\n";

    // double get_force14_xcomponent = coulomb_calculator.get_coulomb_force_xcomponent(get_magnitude_force_14, true, false, 60);
    // double get_force14_ycomponent = coulomb_calculator.get_coulomb_force_ycomponent(get_magnitude_force_14, true, false, 60);
    // std::cout << "x force 14 = " << get_force14_xcomponent << "\n";
    // std::cout << "y force 14 = " << get_force14_ycomponent << "\n";

    // double get_tetha_force14 = std::atan(get_force14_ycomponent / get_force14_xcomponent);
    // std::cout << "tetha 14 = " << get_tetha_force14 << "\n\n";

    // double get_force124_xcomponent = get_force12_xcomponent + get_force14_xcomponent;
    // double get_force124_ycomponent = get_force12_ycomponent + get_force14_ycomponent;
    // std::cout << "x force 124 = " << get_force124_xcomponent << "\n";
    // std::cout << "y force 124 = " << get_force124_ycomponent << "\n";

    // double get_magnitude_force124 = sqrt(pow(get_force124_xcomponent, 2) + pow(get_force124_ycomponent, 2));
    // std::cout << "magnitude force 124 = " << get_magnitude_force124 << "\n";

    // double get_tetha_force124 = std::atan(get_force124_ycomponent / get_force124_xcomponent);
    // std::cout << "tetha 124 = " << get_tetha_force124 << "\n\n";

    // double get_magnitude_force_2proton = coulomb_calculator.get_force_charge1_charge2_distance(false, 1.602e-19, 1.602e-19, 4e-15);
    // std::cout << "magnitude force 2 proton = " << get_magnitude_force_2proton << "\n\n";

    // double get_magnitude_force12 = coulomb_calculator.get_force_charge1_charge2_distance(5.7, 26e-6, 47e-6, false);
    // std::cout << "distance force 12 = "<< get_magnitude_force12 << "\n\n";

    // double get_magnitude_force12 = coulomb_calculator.get_force_charge1_charge2_distance(false, 3e-6, 1.5e-6, 12e-2);
    // std::cout << "distance force 12 = "<< get_magnitude_force12 << "\n\n";

    // double get_charge = coulomb_calculator.get_charge_current_time(false, 2.5e4, 20e-6);
    // std::cout << "charge = " << get_charge;

    // double get_field1 = field_calculator.get_field_charge_distance(false, 2, 1);
    // double get_field1_xcomponent = field_calculator.get_electric_field_xcomponent(get_field1, true, 150);
    // double get_field1_ycomponent = field_calculator.get_electric_field_ycomponent(get_field1, true, 150);
    // std::cout << "magnitude field 1 = " << get_field1 << "\n";
    // std::cout << "x field 1 = " << get_field1_xcomponent << "\n";
    // std::cout << "y field 1 = " << get_field1_ycomponent << "\n\n";

    // double get_field2 = field_calculator.get_field_charge_distance(false, 2, 1);
    // double get_field2_xcomponent = field_calculator.get_electric_field_xcomponent(get_field2, false, 330);
    // double get_field2_ycomponent = field_calculator.get_electric_field_ycomponent(get_field2, false, 330);
    // std::cout << "magnitude field 2 = " << get_field2 << "\n";
    // std::cout << "x field 2 = " << get_field2_xcomponent << "\n";
    // std::cout << "y field 2 = " << get_field2_ycomponent << "\n\n";

    // double get_field3 = field_calculator.get_field_charge_distance(false, 4, 1);
    // double get_field3_xcomponent = field_calculator.get_electric_field_xcomponent(get_field3, false, 30);
    // double get_field3_ycomponent = field_calculator.get_electric_field_ycomponent(get_field3, false, 30);
    // std::cout << "magnitude field 3 = " << get_field3 << "\n";
    // std::cout << "x field 3 = " << get_field3_xcomponent << "\n";
    // std::cout << "y field 3 = " << get_field3_ycomponent << "\n\n";

    // double get_field123_xcomponent = get_field1_xcomponent + get_field2_xcomponent + get_field3_xcomponent;
    // double get_field123_ycomponent = get_field1_ycomponent + get_field2_ycomponent + get_field3_ycomponent;
    // std::cout << "x field 123 = " << get_field123_xcomponent << "\n";
    // std::cout << "y field 123 = " << get_field123_ycomponent << "\n\n";

    // double get_magnitude_field123 = sqrt(pow(get_field123_xcomponent, 2) + pow(get_field123_ycomponent,2));
    // std::cout << "magnitude field 123 = " << get_magnitude_field123 << "\n";

    // double get_tetha_field123 = std::atan(get_field123_ycomponent / get_field123_xcomponent);
    // std::cout << "tetha field 123 = " << get_tetha_field123 << "\n";

    // double get_charge = field_calculator.get_field_charge_distance(2, false, 50e-2);
    // std::cout << "charge = " << get_charge;

    // double get_field1 = field_calculator.get_field_charge_distance(false, 8e-19, 5e-6);
    // double get_field1_xcomponent = field_calculator.get_electric_field_xcomponent(get_field1, true, 135);
    // double get_field1_ycomponent = field_calculator.get_electric_field_ycomponent(get_field1, true, 135);
    // std::cout << "magnitude field 1 = " << get_field1 << "\n";
    // std::cout << "x field 1 = " << get_field1_xcomponent << "\n";
    // std::cout << "y field 1 = " << get_field1_ycomponent << "\n\n";

    // double get_field2 = field_calculator.get_field_charge_distance(false, 8e-19, 5e-6);
    // double get_field2_xcomponent = field_calculator.get_electric_field_xcomponent(get_field2, true, 315);
    // double get_field2_ycomponent = field_calculator.get_electric_field_ycomponent(get_field2, true, 315);
    // std::cout << "magnitude field 2 = " << get_field2 << "\n";
    // std::cout << "x field 2 = " << get_field2_xcomponent << "\n";
    // std::cout << "y field 2 = " << get_field2_ycomponent << "\n\n";

    // double get_field3 = field_calculator.get_field_charge_distance(false, 4.8e-19, 5e-6);
    // double get_field3_xcomponent = field_calculator.get_electric_field_xcomponent(get_field3, true, 45);
    // double get_field3_ycomponent = field_calculator.get_electric_field_ycomponent(get_field3, true, 45);
    // std::cout << "magnitude field 3 = " << get_field3 << "\n";
    // std::cout << "x field 3 = " << get_field3_xcomponent << "\n";
    // std::cout << "y field 3 = " << get_field3_ycomponent << "\n\n";

    // double get_field4 = field_calculator.get_field_charge_distance(false, 19.2e-19, 10e-6);
    // double get_field4_xcomponent = field_calculator.get_electric_field_xcomponent(get_field4, false, 45);
    // double get_field4_ycomponent = field_calculator.get_electric_field_ycomponent(get_field4, false, 45);
    // std::cout << "magnitude field 4 = " << get_field4 << "\n";
    // std::cout << "x field 4 = " << get_field4_xcomponent << "\n";
    // std::cout << "y field 4 = " << get_field4_ycomponent << "\n\n";

    // double get_field1234_xcomponent = get_field1_xcomponent + get_field2_xcomponent + get_field3_xcomponent + get_field4_xcomponent;
    // double get_field1234_ycomponent = get_field1_ycomponent + get_field2_ycomponent + get_field3_ycomponent + get_field4_ycomponent;
    // std::cout << "x field 1234 = " << get_field1234_xcomponent << "\n";
    // std::cout << "y field 1234 = " << get_field1234_ycomponent << "\n\n";

    // double get_magnitude_field1234 = sqrt(pow(get_field1234_xcomponent, 2) + pow(get_field1234_ycomponent,2));
    // std::cout << "magnitude field 1234 = " << get_magnitude_field1234 << "\n";

    // double get_tetha_field1234 = std::atan(get_field1234_ycomponent / get_field1234_xcomponent);
    // std::cout << "tetha field 1234 = " << get_tetha_field1234 << "\n";

    // double get_flux_left = gauss_calculator.get_flux_field_surface_tetha(false, 1, 1, 180);
    // double get_flux_middle = gauss_calculator.get_flux_field_surface_tetha(false, 1, 1, 90);
    // double get_flux_right = gauss_calculator.get_flux_field_surface_tetha(false, 1, 1, 0);

    // double flux_total = get_flux_left + get_flux_middle + get_flux_right;
    // std::cout << "flux total = " << flux_total;

    // double surface1 = 4 * M_PI * pow(6e-2, 2);
    // double surface2 = 4 * M_PI *pow(12e-2, 2);
    // double get_flux1 = gauss_calculator.get_field_surface_tetha_enccharge(false, surface1, 0, 8e-19);
    // double get_flux2 = gauss_calculator.get_field_surface_tetha_enccharge(false, surface2, 180, -17.6e-19);
    // std::cout << "flux1 = " << get_flux1 << "\n";
    // std::cout << "flux2 = " << get_flux2 << "\n";

    // double surface1 = pow(3.2e-2, 2);
    // double get_flux1 = gauss_calculator.get_flux_field_surface_tetha(false, 18e2, surface1, 35);
    // double surface2 = M_PI * pow(11e-2, 2);
    // double flux_total = 0;
    // double get_flux_rim = gauss_calculator.get_flux_field_surface_tetha(false, 3e-3, surface2, 0);
    // double get_flux_net = flux_total - get_flux_rim;
    // std::cout << "flux 1 = " << get_flux1 << "\n";
    // std::cout << "flux 2 = " << get_flux_net << "\n";

    // double get_force = field_calculator.get_field_force_charge(150, false, -1.6e-19);
    // std::cout << "force = " << get_force << "\n";
    // double get_work = potential_calculator.get_work_force_distance_tetha(false, get_force, 520, 180);
    // std::cout << "work = " << get_work << "\n";
    // double get_energy = potential_calculator.get_energy_work(false, get_work);
    // std::cout << "energy = " << get_energy << "\n";
    // double get_voltage = potential_calculator.energy_charge_voltage(get_energy, -1.6e-19, false);
    // std::cout << "voltage = " << get_voltage << "\n";

    // double get_charge = 84 * 3600;
    // double get_energy1 = potential_calculator.energy_charge_voltage(false, get_charge, 12);
    // std::cout << "charge = " << get_charge << "\n";
    // std::cout << "energy1 = " << get_energy1 << "\n";

    // double get_energy2 = potential_calculator.energy_charge_voltage(false, 1, 1.2e9);
    // std::cout << "energy2 = " << get_energy2 << "\n";

    // double get_energy3 = potential_calculator.energy_charge_voltage(false, 30, 1e9);
    // double get_velocity = sqrt((2 * get_energy3) / 1000);
    // std::cout << "energy3 = " << get_energy3 << "\n";
    // std::cout << "velocity = " << get_velocity << "\n";

    // double get_charge = capacitance_calculator.get_charge_capacitance_voltage(false, 0.25e-6, 12);
    // double get_electron = get_charge / 1.602e-19;
    // double get_distance = get_electron / (8.49e28 * 2e-4);
    // std::cout << "charge = " << get_charge << "\n";
    // std::cout << "electron = " << get_electron << "\n";
    // std::cout << "distance = " << get_distance << "\n";

    // double get_capacitance = capacitance_calculator.get_capacitance_isolatedsphere_radius(false, 6.85e-2);
    // double get_energy = capacitance_calculator.get_energy_charge_capacitance(false, 1.25e-9, get_capacitance);
    // std::cout << "energy = " << get_energy << "\n";

    // double get_surface = M_PI * pow(8.2e-2, 2);
    // double get_capacitance = capacitance_calculator.get_capacitance_parallelplate_surface_distance(false, get_surface, 1.3e-3);
    // double get_charge = capacitance_calculator.get_charge_capacitance_voltage(false, get_capacitance, 120);
    // std::cout << "capacitance = " << get_capacitance << "\n";
    // std::cout << "charge = " << get_charge << "\n";

    // double get_capacitance_series = capacitance_calculator.get_capacitance_series({10e-6, 5e-6});
    // double get_capacitance_paralel = capacitance_calculator.get_capacitance_parallel({get_capacitance_series, 4e-6});
    // std::cout << "capacitance seri = " << get_capacitance_series << "\n";
    // std::cout << "capacitance paralel = " << get_capacitance_paralel << "\n";

    // double get_energy = 10000 * 3600;
    // double get_capacitance = capacitance_calculator.get_energy_capacitance_voltage(get_energy, false, 1000);
    // std::cout << "capacitance = " << get_capacitance << "\n";

    // double get_resistance_a = currentresistance_calculator.get_resistance_resistivity_long_surface(false, 1, 1, 1);
    // double get_resistance_b = currentresistance_calculator.get_resistance_resistivity_long_surface(false, 1, 1.5, 0.5);
    // double get_resistance_c = currentresistance_calculator.get_resistance_resistivity_long_surface(false, 1, 0.5, 0.5);
    // std::cout << "resistance a = " << get_resistance_a << "\n";
    // std::cout << "resistance b = " << get_resistance_b << "\n";
    // std::cout << "resistance c = " << get_resistance_c << "\n";

    // double get_resistance1 = currentresistance_calculator.get_resistance_resistivity_long_surface(false, 9.68e-8, 15e-2, 1.2e-2 * 1.2e-2);
    // double get_resistance2 = currentresistance_calculator.get_resistance_resistivity_long_surface(false, 9.68e-8, 1.2e-2, 1.2e-2 * 15e-2);
    // std::cout << "resistance 1 = " << get_resistance1<< "\n";
    // std::cout << "resistance 2 = " << get_resistance2 << "\n";

    // double get_power1 = currentresistance_calculator.get_power_voltage_resistance(false, 120, 72);
    // double get_power2 = currentresistance_calculator.get_power_voltage_resistance(false, 120, 36);
    // std::cout << "power 1 = " << get_power1 << "\n";
    // std::cout << "power 2 = " << get_power2 << "\n";

    // double get_charge = currentresistance_calculator.get_charge_current_time(false, 5, 240);
    // double get_electron = get_charge / 1.602e-19;
    // std::cout << "charge = " << get_charge << "\n";
    // std::cout << "electron = " << get_electron << "\n";

    // double get_voltage = currentresistance_calculator.get_voltage_current_resistance(false, 50e-3, 2000);
    // std::cout << "voltage = " << get_voltage;

    // double get_resistance = currentresistance_calculator.get_power_voltage_resistance(0.54, 3, false);
    // double get_power = currentresistance_calculator.get_power_voltage_resistance(false, 1.5, get_resistance);
    // std::cout << "resistance = " << get_resistance << "\n";
    // std::cout << "power now = " << get_power << "\n";
}  
