#include "S_12.h"
#include <vector>

std::string Solution::intToRoman(int num) {
    std::vector<std::pair<int, std::string>> val = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    std::string res;
    for (auto &[v, sym] : val)
        while (num >= v) {
            res += sym;
            num -= v;
        }
    return res;
}

// Example usage
/*
#include <iostream>
int main() {
    Solution sol;
    std::cout << sol.intToRoman(1994) << std::endl; // Output: MCMXCIV
}
*/
