#include "S_3.h"
#include <unordered_set>
#include <algorithm>

int Solution::lengthOfLongestSubstring(std::string s) {
    std::unordered_set<char> seen;
    int left = 0, result = 0;

    for (int right = 0; right < s.size(); ++right) {
        while (seen.count(s[right]))
            seen.erase(s[left++]);
        seen.insert(s[right]);
        result = std::max(result, right - left + 1);
    }
    return result;
}
