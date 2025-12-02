#include "S_1071.h"

std::string Solution::gcdOfStrings(std::string str1, std::string str2) {
    if (str1 + str2 != str2 + str1)
        return "";
    int gcdLength = gcd(str1.size(), str2.size());
    return str1.substr(0, gcdLength);
}

int Solution::gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
