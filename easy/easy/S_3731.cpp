#include "S_3731.h"

std::vector<int> Solution::findMissingElements(std::vector<int>& nums) {
    if (nums.empty()) return {};

    // Preserving the original logic's sorting operation. 
    std::sort(nums.begin(), nums.end());

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    for (int num : nums) {
        min_val = std::min(min_val, num);
        max_val = std::max(max_val, num);
    }

    std::unordered_map<int, int> presence_map;
    for (int i = min_val; i <= max_val; ++i) {
        presence_map[i]++;
    }

    for (int num : nums) {
        presence_map[num]--;
    }

    std::vector<int> result;
    for (const auto& [key, value] : presence_map) {
        if (value == 1) {
            result.push_back(key);
        }
    }

    std::sort(result.begin(), result.end());

    return result;
}