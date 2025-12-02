#include "S_2974.h"
#include <algorithm>

vector<int> Solution::numberGame(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i += 2) {
        swap(nums[i], nums[i + 1]);
    }
    return nums;
}
