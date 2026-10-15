#include <iostream>
#include <cmath>

class Capacitance{
    public:
        double get_charge_capacitance_voltage(double charge, double capacitance, double voltage){
            if (charge && capacitance && voltage == false){
                return (capacitance / charge);
            }
            else if(charge && capacitance == false && voltage){
                return (charge, voltage);
            }
            else{
                return (capacitance * voltage);
            }
        }
        double get_capacitance_surface_distance(double capacitance, double surface, double distance){
            if(capacitance && surface && distance == false){
                return ((premittivity_constant * surface) / capacitance);
            }
            else if(capacitance && surface == false && distance){
                return ((capacitance * distance) / premittivity_constant);
            }
            else{
                return ((premittivity_constant * surface) / distance);
            }
        }
        double get_capacitance_parallel(std::initializer_list<double> every_value){
            double total = 0;
            for(double value : every_value){
                total += value;
            }
            return total;
        }
        double get_capacitance_series(std::initializer_list<double> every_value)
        {
            double temp = 0;
            double total = 0;
            for (double value : every_value)
            {
                temp += (1/value);
                total = 1 / total;
            }
            return total;
        }
        double get_energy_charge_capacitance(double energy, double charge, double capacitance){
            if(energy && charge && capacitance == false){
                return ((pow(charge, 2)) / (2 * capacitance));
            }
            else if(energy && charge == false && capacitance){
                return (sqrt(2 * charge * capacitance));
            }
            else{
                return ((pow(charge, 2)) / (2 * energy));
            }
        }
        double get_energy_capacitance_voltage(double energy, double capacitance, double voltage){
            if(energy && capacitance && voltage == false){
                return (sqrt(2 * energy * capacitance));
            }
            else if(energy && capacitance == false && voltage){
                return ((2 * energy) / (pow(voltage, 2)));
            }
            else{
                return ((capacitance * pow(voltage, 2)) / (2));
            }
        }

    private:
        static constexpr double premittivity_constant = 8.85e-12;
};