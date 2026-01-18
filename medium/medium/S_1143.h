#pragma once
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    /**
     * Calculates the length of the Longest Common Subsequence (LCS) between two strings.
     * * @param text1 The first input string.
     * @param text2 The second input string.
     * @return The length of the longest common subsequence.
     */
    int longestCommonSubsequence(std::string text1, std::string text2);
};