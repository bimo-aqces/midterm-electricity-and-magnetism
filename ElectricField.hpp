#include <iostream>
#include <cmath>

class ElectricField{
    public:
        double get_electric_field(double charge, double distance) {
            return (coulomb_constant * charge / pow(distance,2));
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

    private:
        static constexpr double coulomb_constant = 8.99e9;
        static constexpr double premittivity_constant = 8.85e-12;
};