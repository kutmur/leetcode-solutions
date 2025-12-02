#include "S_3396.h"

int Solution::minimumOperations(vector<int>& nums) {
    int result = 0;

    while (true) {
        bool duplicate = false;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate)
                break;
        }

        if (!duplicate)
            break;

        int removeCount = min(3, (int)nums.size());
        for (int i = 0; i < removeCount; i++)
            nums.erase(nums.begin());

        result++;
    }

    return result;
}
