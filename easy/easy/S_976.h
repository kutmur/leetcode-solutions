#ifndef S_976_H
#define S_976_H

#include <vector>
#include <algorithm>

class Solution {
public:
    /**
     * @brief Given an integer array nums, return the largest perimeter of a triangle
     * with a non-zero area, formed from three of these lengths. If it is
     * impossible to form any triangle of a non-zero area, return 0.
     *
     * @param nums A vector of integers representing side lengths.
     * @return The largest possible perimeter of a valid triangle, or 0 if none can be formed.
     */
    int largestPerimeter(std::vector<int>& nums);
};

#endif // S_976_H