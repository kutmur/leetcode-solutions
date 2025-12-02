#include "S_1679.h"
#include <algorithm>

int Solution::maxOperations(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int right = nums.size() - 1;
    int left = 0;
    int result = 0;
    while (left < right) {
        if (nums[right] + nums[left] == k) {
            left++;
            right--;
            result++;
        } else {
            if (nums[right] + nums[left] > k)
                right--;
            else
                left++;
        }
    }
    return result;
}
