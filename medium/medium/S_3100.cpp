#include "S_3100.h"

/**
 * @brief Simulates the process of drinking and exchanging bottles to find the maximum.
 */
int Solution::maxBottlesDrunk(int numBottles, int numExchange) {
    // Initially, we drink all the bottles we have.
    int total_drunk = numBottles;
    
    // These bottles are now empty.
    int empty_bottles = numBottles;
    
    // We continue to exchange as long as we have enough empty bottles.
    while (empty_bottles >= numExchange) {
        // 1. Exchange 'numExchange' empty bottles for one full bottle.
        empty_bottles -= numExchange;
        
        // 2. Drink the new bottle.
        total_drunk++;
        
        // 3. The newly drunk bottle becomes an empty bottle.
        empty_bottles++;
        
        // 4. The cost for the next exchange increases.
        numExchange++;
    }
    
    return total_drunk;
}