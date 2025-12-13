#include "S_3606.h"

std::vector<std::string> Solution::validateCoupons(std::vector<std::string>& code, 
                                                   std::vector<std::string>& businessLine, 
                                                   std::vector<bool>& isActive) {
    // Store pairs of {Category, Code} for valid items.
    // Storing in this order allows us to use default pair sorting (Item1 then Item2).
    std::vector<std::pair<std::string, std::string>> validItems;
    validItems.reserve(code.size());

    for (size_t i = 0; i < code.size(); ++i) {
        // 1. Check if active
        if (!isActive[i]) continue;

        // 2. Check format and Category validity
        if (isFormatValid(code[i]) && isValidCategory(businessLine[i])) {
            validItems.push_back({businessLine[i], code[i]});
        }
    }

    // Sort lexicographically: Primary key = Category, Secondary key = Code
    std::sort(validItems.begin(), validItems.end());

    // Extract the codes from the sorted pairs
    std::vector<std::string> result;
    result.reserve(validItems.size());
    
    for (const auto& item : validItems) {
        result.push_back(item.second);
    }

    return result;
}

bool Solution::isFormatValid(const std::string& s) {
    if (s.empty()) return false;
    for (unsigned char c : s) {
        // Allow A-Z, a-z, 0-9, and underscore
        if (!std::isalnum(c) && c != '_') return false;
    }
    return true;
}

bool Solution::isValidCategory(const std::string& s) {
    static const std::unordered_set<std::string> validCategories = {
        "electronics",
        "grocery",
        "pharmacy",
        "restaurant"
    };
    return validCategories.count(s);
}