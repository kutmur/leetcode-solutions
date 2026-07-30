// S_3014.cpp
#include "S_3014.h"
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <vector>

int Solution::minimumPushes(std::string word) {
    std::unordered_map<char, int> freq_map;

    for (char c : word) {
        freq_map[c]++;
    }

    std::vector<int> freqs;
    freqs.reserve(freq_map.size());

    for (const auto& [key, value] : freq_map) {
        freqs.push_back(value);
    }

    std::sort(freqs.begin(), freqs.end(), std::greater<int>());

    int counter = 1;
    int result = 0;
    for (size_t i = 0; i < freqs.size(); i++) {
        if (i > 0 && i % 8 == 0) {
            counter++;
        }
        result += freqs[i] * counter;
    }

    return result;
}