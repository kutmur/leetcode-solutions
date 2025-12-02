#include "S_3162.h"
#include <unordered_map>

int Solution::numberOfPairs(std::vector<int>& nums1, std::vector<int>& nums2, int k) {
    std::unordered_map<int, int> freq;
    for (int num : nums2)
        freq[num * k]++;

    int result = 0;
    for (int a : nums1)
        for (auto& [value, count] : freq)
            if (a % value == 0)
                result += count;

    return result;
}
