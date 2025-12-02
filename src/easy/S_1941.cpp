#include "S_1941.h"
#include <unordered_map>

bool Solution::areOccurrencesEqual(string s) {
    unordered_map<char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }

    int count = freq.begin()->second;
    
    for (const auto& pair : freq) {
        if (pair.second != count) {
            return false;
        }
    }

    return true;
}
