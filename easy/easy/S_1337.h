#pragma once
#include <vector>
#include <algorithm>
#include <utility> // Required for std::pair

class Solution {
public:
    /**
     * Identifies the indices of the k weakest rows in a binary matrix.
     * Rows are ordered by soldier count (weakest first), then by row index.
     *
     * @param mat The m x n binary matrix representing soldiers (1) and civilians (0).
     * @param k The number of weakest rows to return.
     * @return A vector of indices for the k weakest rows.
     */
    std::vector<int> kWeakestRows(std::vector<std::vector<int>>& mat, int k);
};