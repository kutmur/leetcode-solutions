#include "S_2396.h"

bool Solution::isStrictlyPalindromic(int n) {
    for (int base = 2; base <= n - 2; base++) {
        if (!isPalindrom(toBase(n, base)))
            return false;
    }
    return true;
}

std::vector<int> Solution::toBase(int num, int base) {
    std::vector<int> result;
    while (num > 0) {
        result.push_back(num % base);
        num /= base;
    }
    return result;
}

bool Solution::isPalindrom(const std::vector<int>& v) {
    int left = 0, right = v.size() - 1;
    while (left < right) {
        if (v[left] != v[right])
            return false;
        left++;
        right--;
    }
    return true;
}
