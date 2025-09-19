#ifndef S_435_H
#define S_435_H

#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * @brief Calculates the minimum number of intervals to remove to make the rest non-overlapping.
     * 
     * @param intervals A vector of intervals, where each interval is represented by a vector of two integers [start, end].
     * @return The minimum number of intervals to remove.
     */
    int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals);
};

#endif // S_435_H