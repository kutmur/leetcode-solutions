#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

class Solution {
public:
    /**
     * Calculates the maximum number of times the word "balloon" can be formed.
     * * @param text The input string containing available characters.
     * @return The maximum number of "balloon" instances.
     */
    int maxNumberOfBalloons(std::string text);

private:
    // Helper to map characters to 0-25 index
    int getCharIndex(char c);
};