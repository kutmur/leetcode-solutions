#ifndef S_215_H
#define S_215_H

#include <vector>
#include <queue>
#include <functional> // For std::greater

class Solution {
public:
    /**
     * @brief Finds the k-th largest element in an unsorted array.
     * 
     * This method uses a min-heap to keep track of the k largest elements.
     * The time complexity is O(N log k) and space complexity is O(k).
     * 
     * @param nums A vector of integers.
     * @param k The k-th largest element to find.
     * @return The k-th largest element.
     */
    int findKthLargest(std::vector<int>& nums, int k);
};

#endif // S_215_H