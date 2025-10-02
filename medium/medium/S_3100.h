#ifndef S_3100_H
#define S_3100_H

class Solution {
public:
    /**
     * @brief Calculates the maximum number of water bottles that can be drunk.
     * 
     * You start with a number of full water bottles. You can drink a bottle to make it empty.
     * You can exchange a certain number of empty bottles for a full one. This exchange
     * cost increases by one after each exchange.
     * 
     * @param numBottles The initial number of full water bottles.
     * @param numExchange The initial number of empty bottles required for an exchange.
     * @return The total number of water bottles that can be drunk.
     */
    int maxBottlesDrunk(int numBottles, int numExchange);
};

#endif // S_3100_H