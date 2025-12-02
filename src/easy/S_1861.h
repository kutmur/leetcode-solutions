#ifndef S_1861_H
#define S_1861_H

#include <vector>

/**
 * @class Solution
 * @brief Solves the unplaced fruits problem.
 */
class Solution {
public:
    /**
     * @brief Calculates the number of fruits that cannot be placed into baskets.
     * * This function implements a greedy strategy where each fruit is placed
     * into the *first* available basket that has sufficient capacity.
     * A basket, once used, is removed from the available pool.
     *
     * @param fruits A vector of integers representing the sizes of the fruits.
     * @param baskets A vector of integers representing the capacities of the baskets. 
     * This vector WILL be modified in-place.
     * @return The total number of fruits that could not be placed in any basket.
     */
    int numOfUnplacedFruits(std::vector<int>& fruits, std::vector<int>& baskets);
};

#endif // S_1861_H