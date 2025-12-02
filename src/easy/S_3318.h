/* S_3318.h */

#ifndef S_3318_H
#define S_3318_H

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <utility> // For std::pair

// We avoid 'using namespace std;' in a header file
// and explicitly use the std:: prefix.

class Solution {
public: 
    /**
     * @brief Finds the "X-Sum" for all k-long subarrays.
     * * The X-Sum for a subarray is defined as the sum of (value * frequency)
     * for the 'x' most frequent elements in that subarray.
     * Ties in frequency are broken by the element with the larger value.
     * * @param nums The input vector of integers.
     * @param k The length of the sliding window (subarray).
     * @param x The number of top frequent elements to consider for the sum.
     * @return A vector of integers, where each element is the X-Sum 
     * for the corresponding k-long subarray.
     */
    std::vector<int> findXSum(std::vector<int>& nums, int k, int x);
};

#endif // S_3318_H