#include "S_674.h"

int Solution::findLengthOfLCIS(vector<int>& nums) {
    int counter = 1;
    int result = 1;
    for (int i = 0; i < nums.size(); i++) {
        counter = 1;
        while (i < nums.size() - 1 && nums[i + 1] > nums[i]) {
            counter++;
            i++;
        }
        if (result < counter)
            result = counter;
    }
    return result;
}
