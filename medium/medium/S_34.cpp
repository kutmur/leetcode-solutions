#include "S_34.h"

vector<int> Solution::searchRange(vector<int>& nums, int target) {
    int first = findFirst(nums, target);
    int last = findLast(nums, target);
    return {first, last};
}

int Solution::findFirst(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] >= target) r = mid - 1;
        else l = mid + 1;
        if (nums[mid] == target) ans = mid;
    }
    return ans;
}

int Solution::findLast(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] <= target) l = mid + 1;
        else r = mid - 1;
        if (nums[mid] == target) ans = mid;
    }
    return ans;
}
