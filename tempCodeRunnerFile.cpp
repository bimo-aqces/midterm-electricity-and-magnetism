    double get_resistance = currentresistance_calculator.get_power_voltage_resistance(0.54, 3, false);
    double get_power = currentresistance_calculator.get_power_voltage_resistance(false, 1.5, get_resistance);
    std::cout << "resistance = " << get_resistance;
    std::cout << "power now = " << get_power;