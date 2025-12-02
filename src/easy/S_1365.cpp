#include "S_1365.h"

vector<int> Solution::smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> count(101, 0);  // nums[i] ∈ [0, 100]
    for (int num : nums)
        count[num]++;

    for (int i = 1; i < 101; i++)
        count[i] += count[i - 1];

    vector<int> result;
    for (int num : nums) {
        if (num == 0)
            result.push_back(0);
        else
            result.push_back(count[num - 1]);
    }

    return result;
}
