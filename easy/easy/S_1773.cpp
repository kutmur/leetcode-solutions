#include "S_1773.h"

int Solution::countMatches(std::vector<std::vector<std::string>>& items, std::string ruleKey, std::string ruleValue) {
    int size = items.size();
    int result = 0;
    
    // Case 1: The rule applies to the "type" of the item (index 0).
    if (ruleKey == "type") {
        for (int i = 0; i < size; i++) {
            if (items[i][0] == ruleValue)
                result++;
        }
    }
    // Case 2: The rule applies to the "color" of the item (index 1).
    else if (ruleKey == "color") {
        for (int i = 0; i < size; i++) {
            if (items[i][1] == ruleValue)
                result++;
        }
    }
    // Case 3: The rule applies to the "name" of the item (index 2).
    else {
        for (int i = 0; i < size; i++) {
            if (items[i][2] == ruleValue)
                result++;
        }
    }
    
    return result;
}