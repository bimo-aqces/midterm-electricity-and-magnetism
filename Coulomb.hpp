#include <iostream>
#include <cmath>

class Coulomb{
    public:
        double get_coulomb_force(double charge_1, bool charge_type_1, double charge_2, bool charge_type_2, double distance){
            if (charge_type_1 == true && charge_type_2 == true && charge_1 < charge_2 || charge_type_1 == false && charge_type_2 == false && charge_1 < charge_2)
            {
                return -(coulomb_constant * charge_1 * charge_2) / (pow(distance, 2));
            }
            else{
                return (coulomb_constant * charge_1 * charge_2) / (pow(distance, 2));
            }
        }

        double get_coulomb_force_xcomponent(double coulomb_value, double tetha){
            double radian_value = tetha * (M_PI / 180);
            return coulomb_value * std::cos(radian_value);
        }

        double get_coulomb_force_ycomponent(double coulomb_value, double tetha)
        {
            double radian_value = tetha * (M_PI / 180);
            return coulomb_value * std::sin(radian_value);
        }

    private:
        static constexpr double coulomb_constant = 8.99e9;
        static constexpr double premittivity_constant = 8.85e-12;
};