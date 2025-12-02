#include "S_2469.h"

std::vector<double> Solution::convertTemperature(double celsius) {
    std::vector<double> result;
    result.push_back(celsius + 273.15);             // Convert to Kelvin
    result.push_back(celsius * 1.80 + 32.00);        // Convert to Fahrenheit
    return result;
}
