#include <iostream>
#include <cmath>

class CurrentResistance{
    public:
        double get_voltage_current_resistance(double voltage, double current, double resistance){
            if(voltage, current, resistance == false){
                return (voltage / current);
            }
            else if(voltage, current == false, resistance){
                return (voltage / resistance);
            }
            else{
                return (current * resistance);
            }
        }
        double get_charge_current_time(double charge, double current, double time)
        {
            if (charge && current && time == false)
            {
                return (charge / current);
            }
            else if (charge && current == false && time)
            {
                return (charge / time);
            }
            else
            {
                return (current * time);
            }
        }
        double get_conductivity_resistivity(double conductivity, double resistivity){
            if(conductivity, resistivity == false){
                return (1 / conductivity);
            }
            else{
                return (1 / resistivity);
            }
        }

        double get_resistance_resistivity_long_surface(double resistance, double resistivity, double length, double surface)
        {
            if(resistance, resistivity, length, surface == false){
                return ((resistivity * length) / resistance);
            }
            else if(resistance, resistivity, length == false, surface){
                return ((resistance * surface) / resistivity);
            }
            else if(resistance, resistivity == false, length, surface){
                return ((resistance * surface) / length);
            }
            else{
                return ((resistivity * length) / surface);
            }
        }
        double get_power_current_voltage(double power, double current, double voltage){
            if(power, current, voltage==false){
                return (power / current);
            }
            else if(power, current == false, voltage){
                return (power / voltage);
            }
            else{
                return (current * voltage);
            }
        }
        double get_power_current_resistance(double power, double current, double resistance){
            if(power, current, resistance == false){
                return (power / pow(current, 2));
            }
            else if(power, current == false, resistance){
                return (sqrt(power / resistance));
            }
            else{
                return (pow(current, 2) * resistance);
            }
        }
        double get_power_voltage_resistance(double power, double voltage, double resistance)
        {
            if (power, voltage, resistance == false)
            {
                return (pow(voltage, 2)/power);
            }
            else if (power, voltage == false, resistance)
            {
                return (sqrt(power * resistance));
            }
            else
            {
                return (pow(voltage, 2) / resistance);
            }
        }

    private:
        static constexpr double coulomb_constant = 8.99e9;
        static constexpr double premittivity_constant = 8.85e-12;
};