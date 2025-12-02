#include "S_1913.h"
#include <algorithm>

int Solution::maxProductDifference(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int maxProduct = nums[n - 1] * nums[n - 2];
    int minProduct = nums[0] * nums[1];
    return maxProduct - minProduct;
}
