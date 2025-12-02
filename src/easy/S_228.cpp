#include "S_228.h"

std::vector<std::string> Solution::summaryRanges(std::vector<int>& nums) {
    std::vector<std::string> result;
    if (nums.empty()) return result;

    int start = nums[0];

    for (int i = 1; i <= nums.size(); ++i) {
        // Check if we are at the end or the current number breaks the range
        if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
            if (start == nums[i - 1]) {
                result.push_back(std::to_string(start));
            } else {
                result.push_back(std::to_string(start) + "->" + std::to_string(nums[i - 1]));
            }
            if (i < nums.size()) {
                start = nums[i];
            }
        }
    }

    return result;
}
