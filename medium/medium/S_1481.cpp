#include "S_1481.h"

int Solution::findLeastNumOfUniqueInts(std::vector<int>& arr, int k) {
    // 1. Count the frequency of each number
    std::unordered_map<int, int> countMap;
    for (int num : arr) {
        countMap[num]++;
    }

    // 2. Extract frequencies into a vector
    // Optimization: We only need the frequencies, not the values themselves,
    // to determine the count of unique integers remaining.
    std::vector<int> frequencies;
    frequencies.reserve(countMap.size());
    for (auto const& [val, count] : countMap) {
        frequencies.push_back(count);
    }

    // 3. Sort frequencies in ascending order
    // We want to remove elements with the lowest frequencies first
    // to maximize the reduction of unique keys.
    std::sort(frequencies.begin(), frequencies.end());

    // 4. Greedy removal
    int uniqueCount = frequencies.size();
    for (int freq : frequencies) {
        if (k >= freq) {
            k -= freq;
            uniqueCount--;
        } else {
            // If we cannot remove all instances of this number, 
            // the unique count remains the same from here on.
            return uniqueCount; 
        }
    }

    return uniqueCount;
}