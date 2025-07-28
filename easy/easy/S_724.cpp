#include "S_724.h"

int Solution::pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    for(int i = 0; i < nums.size(); i++)
        totalSum += nums[i];

    int rightSum = totalSum;
    int leftSum = 0;

    for(int j = 0; j < nums.size(); j++) {
        if(j > 0)
            leftSum += nums[j - 1];

        rightSum -= nums[j];

        if(leftSum == rightSum)
            return j;
    }

    return -1;
}
