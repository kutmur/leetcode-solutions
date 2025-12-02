#include "S_3442.h"

int Solution::maxDifference(std::string s) {
    std::unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int max_diff = INT_MIN;
    std::vector<int> odds, evens;

    for (auto const& [ch, count] : freq) {
        if (count % 2 == 0) {
            evens.push_back(count);
        } else {
            odds.push_back(count);
        }
    }

    // Iterate through every pair of odd and even frequencies to find the maximum difference.
    for (int o : odds) {
        for (int e : evens) {
            max_diff = std::max(max_diff, o - e);
        }
    }

    return max_diff;
}