#include "S_1431.h"

std::vector<bool> Solution::kidsWithCandies(std::vector<int>& candies, int extraCandies) {
    int candiesMax = candies[0];
    std::vector<bool> result;

    for (int i = 1; i < candies.size(); i++) { // Start from index 1 to optimize
        if (candies[i] > candiesMax) 
            candiesMax = candies[i];
    }

    for (int j = 0; j < candies.size(); j++) {
        result.push_back(candies[j] + extraCandies >= candiesMax);
    }

    return result;
}
