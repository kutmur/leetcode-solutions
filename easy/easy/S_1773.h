#ifndef S_1773_H
#define S_1773_H

#include <vector>
#include <string>

// LeetCode 1773. Count Items Matching a Rule
class Solution {
public:
    /**
     * @brief Counts the number of items that match a given rule.
     * @param items A vector of vectors of strings, where items[i] = [typei, colori, namei].
     * @param ruleKey A string, one of "type", "color", or "name".
     * @param ruleValue The string to match against the specified property.
     * @return The number of items that match the rule.
     */
    int countMatches(std::vector<std::vector<std::string>>& items, std::string ruleKey, std::string ruleValue);
};

#endif // S_1773_H