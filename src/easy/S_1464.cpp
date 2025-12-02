#include "S_1464.h"

int Solution::maxProduct(std::vector<int>& nums) {
    int result = 0;
    int temp = 0;
    for (int i = 0; i < nums.size() - 1; ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            temp = (nums[i] - 1) * (nums[j] - 1);
            if (temp > result) {
                result = temp;
            }
        }
    }
    return result;
}
