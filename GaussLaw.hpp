#include <iostream>
#include <cmath>

class GaussLaw{
    public:
        double get_flux_field_surface_tetha(double flux, double electric_field, double surface, double tetha){
            double radian_value = (tetha) * (M_PI / 180);
            if(flux, electric_field, surface, tetha == false){
                return (std::acos(flux / (electric_field * surface)));
            }
            else if(flux, electric_field, surface == false, tetha){
                return (flux / (electric_field * std::cos(radian_value)));
            }
            else if(flux, electric_field == false, surface, tetha){
                return (flux / (surface * std::cos(radian_value)));
            }
            else{
                return (electric_field * surface * std::cos(radian_value));
            }
            
        }
        double get_field_surface_tetha_enccharge(double electric_field, double surface, double tetha, double enccharge){
            double radian_value = (tetha) * (M_PI / 180);
            if(electric_field, surface, tetha, enccharge == false){
                return (premittivity_constant * electric_field * surface * std::cos(radian_value));
            }
            else if(electric_field, surface, tetha == false, enccharge){
                return (std::acos(enccharge / (premittivity_constant * electric_field * surface)));
            }
            else if(electric_field, surface == false, tetha, enccharge){
                return (enccharge / (premittivity_constant * electric_field * std::cos(radian_value)));
            }
            else{
                return (enccharge / (premittivity_constant * surface * std::cos(radian_value)));
            }
        }

    private : 
        static constexpr double coulomb_constant = 8.99e9;
        static constexpr double premittivity_constant = 8.85e-12;
};