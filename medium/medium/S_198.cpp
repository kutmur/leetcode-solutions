#include "S_198.h"

int Solution::rob(std::vector<int>& nums) {
    int rob1 = 0;
    int rob2 = 0;

    for (int n : nums) {
        int temp = std::max(n + rob1, rob2);
        rob1 = rob2;
        rob2 = temp;
    }

    return rob2;
}