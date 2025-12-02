#include "S_2016.h"
#include <algorithm>

int Solution::maximumDifference(vector<int>& nums) {
    int size = nums.size();
    int maxdiff = -1;
    if(size == 1)
        return -1;
    for(int i = 0; i < size; i++)
        for(int j = i + 1; j < size; j++)
            if(nums[j] > nums[i])
                maxdiff = max(maxdiff, nums[j] - nums[i]);
    return maxdiff;
}
