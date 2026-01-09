#include "S_2363.h"

using namespace std;

vector<vector<int>> Solution::mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    // Use a hash map to aggregate weights by value ID
    unordered_map<int, int> freq;

    // Process first batch of items
    for (const auto& item : items1) {
        freq[item[0]] += item[1];
    }

    // Process second batch of items
    for (const auto& item : items2) {
        freq[item[0]] += item[1];
    }

    // Convert map to vector for sorting
    vector<vector<int>> result;
    result.reserve(freq.size()); // Optimization: reserve memory to avoid reallocations

    for (auto const& [key, value] : freq) {
        result.push_back({key, value});
    }

    // Sort by value ID (ascending)
    sort(result.begin(), result.end());

    return result;
}