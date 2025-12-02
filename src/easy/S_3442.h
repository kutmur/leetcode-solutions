#ifndef S_3442_H
#define S_3442_H

#include <string>
#include <vector>
#include <unordered_map>
#include <climits>
#include <algorithm>

class Solution {
public:
    /**
     * @brief Calculates the maximum difference between the frequency of a character
     *        that appears an odd number of times and the frequency of a character
     *        that appears an even number of times.
     *
     * @param s The input string.
     * @return The maximum difference, or INT_MIN if no such pair of characters exists.
     */
    int maxDifference(std::string s);
};

#endif // S_3442_H