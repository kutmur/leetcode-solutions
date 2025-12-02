#include "S_1518.h"

int Solution::numWaterBottles(int numBottles, int numExchange) {
    int result = 0;
    int emptyBottles = 0;

    // Loop continues as long as we have full bottles to drink
    while(numBottles > 0){
        // 1. Drink all the full bottles we have
        result += numBottles;
        
        // 2. The bottles we just drank are now empty
        emptyBottles += numBottles;
        
        // 3. Exchange empty bottles for new full ones
        numBottles = emptyBottles / numExchange;
        
        // 4. Calculate the remaining empty bottles after the exchange
        emptyBottles = emptyBottles - numBottles * numExchange;
    }    
    return result;
}