#include "S_3110.h"

int Solution::scoreOfString(std::string s) {
    int result = 0;
    for (size_t i = 0; i < s.size() - 1; i++) {
        result += std::abs(s[i] - s[i + 1]);
    }
    return result;
}
