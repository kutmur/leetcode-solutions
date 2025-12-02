#include "S_3512.h"

int Solution::minOperations(vector<int>& nums, int k) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
    }

    if (sum < k)
        return sum; // Need to reduce entire sum to 0
    else
        return sum % k; // Reduce sum to nearest multiple of k
}
