#ifndef S_1899_H
#define S_1899_H

#include <vector>

// Use std namespace for convenience in implementation
using namespace std;

class Solution {
public:
    /**
     * @brief Checks if it's possible to obtain the target triplet by merging
     * a subset of the given triplets.
     * @param triplets A list of triplets [a, b, c].
     * @param target The target triplet [x, y, z].
     * @return true if the target can be formed, false otherwise.
     */
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target);
};

#endif // S_1899_H