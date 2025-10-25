#ifndef S_1716_H
#define S_1716_H

/**
 * @brief Calculates the total money in the Leetcode bank after n days.
 * * The problem follows a pattern where on the first Monday, $1 is deposited,
 * and each subsequent day $1 more than the previous day is deposited.
 * On every following Monday, the deposit is $1 more than the previous Monday.
 */
class Solution {
public:
    /**
     * @brief Computes the total amount of money deposited after n days.
     * @param n The total number of days.
     * @return The total money deposited.
     */
    int totalMoney(int n);
};

#endif // S_1716_H