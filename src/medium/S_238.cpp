#include "S_238.h"

std::vector<int> Solution::productExceptSelf(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> answer(n, 1);

    int prefix = 1;
    for (int i = 0; i < n; ++i) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; --i) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    return answer;
}
