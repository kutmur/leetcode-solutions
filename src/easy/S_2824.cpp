#include "S_2824.h"

int Solution::countPairs(vector<int>& nums, int target) {
    int counter = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] < target) {
                counter++;
            }
        }
    }
    return counter;
}