#include "S_643.h"

double Solution::findMaxAverage(vector<int>& nums, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++)  
        sum += nums[i];

    int maxSum = sum;

    for (int i = k; i < nums.size(); i++) {
        sum += nums[i] - nums[i - k];  
        maxSum = max(maxSum, sum);
    }

    return (maxSum * 1.0) / (k * 1.0);
}
