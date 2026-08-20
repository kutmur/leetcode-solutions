#include "S_3069.h"

std::vector<int> Solution::resultArray(std::vector<int>& nums) {
    std::vector<int> nums1 = {nums[0]};
    std::vector<int> nums2 = {nums[1]};
    
    for (int i = 2; i < nums.size(); ++i) {
        if (nums1.back() > nums2.back()) {
            nums1.push_back(nums[i]);
        } else {
            nums2.push_back(nums[i]);
        }
    }
    
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    return nums1;
}