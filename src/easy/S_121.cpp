#include "S_121.h"

int Solution::maxProfit(vector<int>& stockPrices) 
{
    int lowestPrice = INT_MAX, highestProfit = 0;
    for (int todayPrice : stockPrices) 
    {
        lowestPrice = min(lowestPrice, todayPrice);
        highestProfit = max(highestProfit, todayPrice - lowestPrice);
    }
    return highestProfit;
}
