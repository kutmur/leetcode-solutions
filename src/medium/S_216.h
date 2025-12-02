#ifndef S_216_H
#define S_216_H

#include <vector>

/**
 * @brief Solution for LeetCode problem 216: Combination Sum III.
 * * Finds all valid combinations of k numbers that sum up to n such that:
 * - Only numbers 1 through 9 are used.
 * - Each number is used at most once.
 */
class Solution {
public:
    /**
     * @brief Finds all unique combinations of k numbers that sum up to n.
     * @param k The number of elements in each combination.
     * @param n The target sum.
     * @return A 2D vector containing all valid combinations.
     */
    std::vector<std::vector<int>> combinationSum3(int k, int n);

private:
    /**
     * @brief A recursive helper function to find combinations using backtracking.
     * @param k The required size of the combination.
     * @param target_sum The remaining sum needed.
     * @param start_num The starting number for the current search iteration (to avoid duplicates).
     * @param current_combination The combination being built in the current recursive path.
     * @param result A reference to the list of all valid combinations found.
     */
    void findCombinations(
        int k, 
        int target_sum, 
        int start_num,
        std::vector<int>& current_combination, 
        std::vector<std::vector<int>>& result);
};

#endif // S_216_H