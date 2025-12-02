#include "S_1470.h"
#include <vector>

std::vector<int> Solution::shuffle(std::vector<int>& nums, int n) {
    int i = 1;
    int j = n;
    int temp = 0;
    while (n > 0) {
        temp = nums[j];
        nums.erase(nums.begin() + j);
        nums.insert(nums.begin() + i, temp);
        j = j + 1;
        i = i + 2;
        n--;
    }
    return nums;
}
