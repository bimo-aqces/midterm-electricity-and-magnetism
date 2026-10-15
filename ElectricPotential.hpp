#include <iostream>
#include <cmath>

class ElectricPotential{
    public:
        double energy_charge_voltage(double energy, double charge, double voltage){
            if(energy && charge && voltage == false){
                return (energy / charge);
            }
            else if(energy && charge == false && voltage){
                return (energy / voltage);
            }
            else{
                return (charge * voltage);
            }
        }
        double get_energy_work(double energy, double work){
            if(energy && work==false){
                return (-energy);
            }
            else{
                return (-work);
            }
        }
    private:
        static constexpr double coulomb_constant = 8.99e9;
        static constexpr double premittivity_constant = 8.85e-12;
};