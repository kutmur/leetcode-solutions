#include "S_128.h"
#include <unordered_set>
#include <algorithm>

int Solution::longestConsecutive(std::vector<int>& nums) {
    std::unordered_set<int> s(nums.begin(), nums.end());
    int maxLen = 0;
    for (int num : s) {
        if (!s.count(num - 1)) {
            int curr = num, len = 1;
            while (s.count(curr + 1)) {
                curr++;
                len++;
            }
            maxLen = std::max(maxLen, len);
        }
    }
    return maxLen;
}
