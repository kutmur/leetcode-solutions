#ifndef S_1408_H
#define S_1408_H

#include <vector>
#include <string>

class Solution {
public:
    /**
     * @brief Finds all strings in a vector that are substrings of another string in the same vector.
     * @param words A vector of strings to search through.
     * @return A vector of strings containing all the identified substrings.
     */
    std::vector<std::string> stringMatching(std::vector<std::string>& words);
};

#endif // S_1408_H