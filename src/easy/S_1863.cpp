#include "S_1863.h"

void Solution::dfs(std::vector<int>& nums, int index, int currXOR) {
    if (index == nums.size()) {
        total += currXOR;
        return;
    }

    dfs(nums, index + 1, currXOR);
    dfs(nums, index + 1, currXOR ^ nums[index]);
}

int Solution::subsetXORSum(std::vector<int>& nums) {
    total = 0;
    dfs(nums, 0, 0);
    return total;
}
