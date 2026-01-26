#include "S_1200.h"

std::vector<std::vector<int>> Solution::minimumAbsDifference(std::vector<int>& arr) {
    // Step 1: Sorting is crucial. It aligns elements such that the minimum difference
    // must exist between adjacent elements.
    std::sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;

    // Step 2: First pass to determine the global minimum difference.
    // We iterate up to size - 1 to compare i and i+1 safely.
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    std::vector<std::vector<int>> result;

    // Step 3: Second pass to collect all pairs matching the minimum difference.
    // Optimized: We don't need a hash map (freq) because the array is sorted.
    // We only need to check adjacent neighbors.
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i + 1] - arr[i] == minDiff) {
            result.push_back({arr[i], arr[i + 1]});
        }
    }

    return result;
}