#include "S_1748.h"
#include <algorithm> // for sort

int Solution::sumOfUnique(vector<int>& nums) {
    int result = 0;
    sort(nums.begin(), nums.end());
    int i = 0;
    while (i < nums.size()) {
        if ((i + 1 < nums.size()) && nums[i] == nums[i + 1]) {
            while (i + 1 < nums.size() && nums[i] == nums[i + 1])
                i++;
        } else {
            result += nums[i];
        }
        i++;
    }
    return result;
}
