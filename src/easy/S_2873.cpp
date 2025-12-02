#include "S_2873.h"
#include <algorithm>

long long Solution::maximumTripletValue(vector<int>& nums) {
    int n = nums.size();
    vector<int> suffixMax(n);
    suffixMax[n - 1] = nums[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        suffixMax[i] = max(nums[i], suffixMax[i + 1]);
    }

    long long result = 0;
    int prefixMax = nums[0];

    for (int j = 1; j < n - 1; j++) {
        long long value = (long long)(prefixMax - nums[j]) * suffixMax[j + 1];
        result = max(result, value);
        prefixMax = max(prefixMax, nums[j]);
    }

    return result;
}
