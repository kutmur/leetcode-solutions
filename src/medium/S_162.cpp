#include "S_162.h"
#include <vector>
#include <algorithm>

int Solution::findPeakElement(std::vector<int>& nums) {
    std::vector<int> copy = nums;
    std::sort(copy.begin(), copy.end());
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == copy.back())
            return i;
    }
    return -1; // default fallback (should never reach here)
}
