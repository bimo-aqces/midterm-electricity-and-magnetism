#include <iostream>
#include <cmath>

class ElectricField{
    public:
        double get_field_charge_distance(double electric_field, double charge, double distance) {
            if(electric_field, charge, distance == false){
                return (sqrt((coulomb_constant * charge) / electric_field));
            }
            else if(electric_field, charge == false, distance){
                return (electric_field * pow(distance, 2) / coulomb_constant);
            }
            else{
                return (coulomb_constant * charge / pow(distance, 2));
            }
                
        }
        double get_electric_field_xcomponent(double electric_field_value, bool charge_type,double tetha){
            if(charge_type == true){
                double radian_value = (tetha + 180) * (M_PI / 180);
                return (electric_field_value * std::cos(radian_value));
            }
            else{
                double radian_value = (tetha) * (M_PI / 180);
                return (electric_field_value * std::cos(radian_value));
            }
        }
        double get_electric_field_ycomponent(double electric_field_value, bool charge_type, double tetha)
        {
            if (charge_type == true)
            {
                double radian_value = (tetha + 180) * (M_PI / 180);
                return (electric_field_value * std::sin(radian_value));
            }
            else
            {
                double radian_value = (tetha) * (M_PI / 180);
                return (electric_field_value * std::sin(radian_value));
            }
        }
        double get_field_force_charge(double electric_field,double force, double charge){
            if(electric_field, force, charge==false){
                return (force / electric_field);
            }
            else if(electric_field, force==false, charge){
                return (electric_field * charge);
            }
            else{
                return (force / charge);
            }
        }

    private:
        static constexpr double coulomb_constant = 8.99e9;
        static constexpr double premittivity_constant = 8.85e-12;
};