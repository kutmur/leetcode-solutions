#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <utility> // for std::pair
#include <cctype>  // for isalnum

class Solution {
public:
    /**
     * Filters and sorts coupons based on validity rules and business categories.
     * * @param code The list of coupon codes.
     * @param businessLine The category associated with each code.
     * @param isActive The status of the coupon.
     * @return A list of valid coupon codes sorted by category, then by code.
     */
    std::vector<std::string> validateCoupons(std::vector<std::string>& code, 
                                             std::vector<std::string>& businessLine, 
                                             std::vector<bool>& isActive);

private:
    // Checks if the string contains only alphanumeric characters or underscores
    bool isFormatValid(const std::string& s);

    // Checks if the business line is in the allowed whitelist
    bool isValidCategory(const std::string& s);
};