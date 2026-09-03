#include "S_3876.h"
#include <algorithm>
#include <climits>

bool Solution::uniformArray(std::vector<int>& nums1) {
    bool there_is_odd = false;
    int min_odd = INT_MAX;
    int min_even = INT_MAX;
    
    for (int num : nums1) {
        if (num % 2 == 1) {
            there_is_odd = true;
            min_odd = std::min(min_odd, num);
        } else {
            min_even = std::min(min_even, num);
        }
    }

    if (!there_is_odd) {
        return true;
    }

    return min_odd < min_even;
}