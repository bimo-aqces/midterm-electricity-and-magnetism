#include <iostream>
#include <cmath>

class Coulomb{
    public:
        float get_coulomb_force(float charge_1, float charge_2, float distance){
            if(charge_1 < charge_2){
                return (-(coulomb_constant * charge_1 * charge_2) / (pow(distance, 2)));
            }
            else{
                return ((coulomb_constant * charge_1 * charge_2) / (pow(distance, 2)));
            }
        }

    private:
        static constexpr float coulomb_constant = 8.99e9f;
        static constexpr float premittivity_constant = 8.85e-12f;
};