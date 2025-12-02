#ifndef S_30_H
#define S_30_H

#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    /**
     * @brief Finds all starting indices of substrings in s that are a concatenation of each word in words exactly once and without any intervening characters.
     * @param s The string to search in.
     * @param words A vector of words to find. All words have the same length.
     * @return A vector of integers representing the starting indices.
     */
    std::vector<int> findSubstring(std::string s, std::vector<std::string>& words);
};

#endif // S_30_H