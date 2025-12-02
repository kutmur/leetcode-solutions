#include "S_3541.h"
#include <unordered_map>
#include <string>
#include <algorithm>

int Solution::maxFreqSum(std::string s) {
    std::unordered_map<char, int> freq;
    for (char c : s)
        freq[c]++;

    std::string vowels = "aeiou";
    int maxVowel = 0, maxConsonant = 0;

    for (auto& [ch, count] : freq) {
        if (vowels.find(ch) != std::string::npos)
            maxVowel = std::max(maxVowel, count);
        else
            maxConsonant = std::max(maxConsonant, count);
    }

    return maxVowel + maxConsonant;
}
