#include "S_3300.h"
#include <vector>
#include <algorithm>

int Solution::minElement(std::vector<int>& nums) {
    int temp = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        temp = nums[i];
        while(temp != 0)
        {
            sum += temp % 10;
            temp = temp / 10;
        }
        nums[i] = sum;
    }
    std::sort(nums.begin(), nums.end());
    return nums[0];
}
