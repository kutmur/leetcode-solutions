#include "S_2068.h"
#include <unordered_map>
#include <cmath>

bool Solution::checkAlmostEquivalent(string word1, string word2) {
    unordered_map<char, int> freq1;
    unordered_map<char, int> freq2;

    for (char c : word1)
        freq1[c]++;
    for (char c : word2)
        freq2[c]++;
    
    for (auto& [ch, count] : freq1) {
        if (abs(count - freq2[ch]) > 3)
            return false;
    }

    for (auto& [ch, count] : freq2) {
        if (abs(count - freq1[ch]) > 3)
            return false;
    }

    return true;
}
