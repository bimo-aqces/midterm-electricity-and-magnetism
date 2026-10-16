#include <iostream>
#include <cmath>

class Coulomb{
    public:
        double get_force_charge1_charge2_distance(double force, double charge_1, double charge_2, double distance){
            if(force && charge_1 && charge_2 && distance == false){
                return (sqrt((coulomb_constant * charge_1 * charge_2) / force));
            }
            else if(force && charge_1 && charge_2 == false && distance){
                return ((coulomb_constant * pow(distance, 2)) / (coulomb_constant * charge_1));
            }
            else if (force && charge_1 == false && charge_2 && distance)
            {
                return ((coulomb_constant * pow(distance, 2)) / (coulomb_constant * charge_2));
            }
            else{
                return ((coulomb_constant * charge_1 * charge_2) / pow(distance, 2));
            }
        }

        double get_coulomb_force_xcomponent(double coulomb_value, bool charge_type1, bool charge_type2,double tetha){
            if(charge_type1 == charge_type2){
                if(tetha == 90 || tetha == 270){
                    return 0;
                }
                double radian_value = (tetha+180) * (M_PI / 180);
                return coulomb_value * std::cos(radian_value);
            }
            else{
                double radian_value = tetha * (M_PI / 180);
                return coulomb_value * std::cos(radian_value);
            }
            
        }

        double get_coulomb_force_ycomponent(double coulomb_value, bool charge_type1, bool charge_type2, double tetha)
        {
            if (charge_type1 == charge_type2)
            {
                if(tetha == 0 || tetha == 180 || tetha == 360){
                    return 0;
                }
                double radian_value = (tetha + 180) * (M_PI / 180);
                return coulomb_value * std::sin(radian_value);
            }
            else
            {
                double radian_value = tetha * (M_PI / 180);
                return coulomb_value * std::sin(radian_value);
            }
        }

        double get_charge_current_time(double charge, double current, double time){
            if(charge && current && time == false){
                return (charge / current);
            }
            else if(charge && current == false && time){
                return (charge / time);
            }
            else{
                return (current * time);
            }
        }

    private:
        static constexpr double coulomb_constant = 8.99e9;
        static constexpr double premittivity_constant = 8.85e-12;
};