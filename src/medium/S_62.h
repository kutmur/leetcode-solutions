#ifndef S_62_H
#define S_62_H

class Solution {
public:
    /**
     * @brief Calculates the number of unique paths in an m x n grid.
     * * @param m The number of rows in the grid.
     * @param n The number of columns in the grid.
     * @return The total number of unique paths from (0,0) to (m-1, n-1).
     */
    int uniquePaths(int m, int n);

private:
    /**
     * @brief Calculates combinations "n choose k", C(n, k).
     * * This function is optimized to avoid large intermediate numbers and
     * uses the identity C(n, k) = C(n, n-k) for faster computation.
     * * @param n The total number of items.
     * @param k The number of items to choose.
     * @return The result of C(n, k) as a long long.
     */
    long long combinations(int n, int k);
};

#endif // S_62_H