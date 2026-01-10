#include "S_1323.h"

int Solution::maximum69Number(int num) {
    // Convert the integer to a string to easily access digits by index
    std::string s = std::to_string(num);
    
    // Iterate from left to right (Most Significant Digit -> Least Significant Digit)
    for (int i = 0; i < s.size(); i++) {
        // The first time we encounter a '6', changing it to '9' yields
        // the largest possible increase in value.
        if (s[i] == '6') {
            s[i] = '9';
            break; // We are allowed to change at most one digit
        }
    }
    
    // Convert the modified string back to an integer
    return std::stoi(s);
}