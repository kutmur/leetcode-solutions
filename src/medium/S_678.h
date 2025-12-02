#pragma once

// Common standard libraries for LeetCode problems
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>

/**
 * @class Solution
 * @brief Encapsulates the solution for the LeetCode problem.
 * * This class is designed to fit the standard LeetCode submission format.
 */
class Solution {
public:
    /**
     * @brief LeetCode 678: Valid Parenthesis String
     * * Checks if a string containing '(', ')', and '*' is valid.
     * '*' can be treated as '(', ')', or an empty string.
     * * @param s The input string composed of '(', ')', and '*'.
     * @return true if the string is valid, false otherwise.
     */
    bool checkValidString(std::string s);
};