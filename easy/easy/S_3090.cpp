// File: S_3090.cpp
#include "S_3090.h"

int Solution::maximumLengthSubstring(std::string s) {
    std::unordered_map<char, int> freq;
    int left = 0;
    int result = 0;

    for (int right = 0; right < s.size(); right++) {
        freq[s[right]]++;

        while (freq[s[right]] > 2) {
            freq[s[left]]--;
            left++;
        }

        result = std::max(result, right - left + 1);
    }

    return result;
}