#include "S_202.h"
#include <unordered_map>

int calcSum(int a) {
    int sum = 0;
    while(a > 0) {
        int digit = a % 10;
        sum += digit * digit;
        a /= 10;
    }
    return sum;
}

bool Solution::isHappy(int n) {
    std::unordered_map<int, int> seen;
    while(n != 1) {
        n = calcSum(n);
        if(seen.count(n))
            return false;
        seen[n]++;
    }
    return true;
}
