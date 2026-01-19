#include "S_714.h"

using namespace std;

int Solution::maxProfit(vector<int>& prices, int fee) {
    // Edge case: If there are no prices, profit is 0.
    if (prices.empty()) {
        return 0;
    }

    // State 0: 'cash' -> Max profit assuming we do NOT hold a stock at the end of the day.
    int cash = 0;
    
    // State 1: 'hold' -> Max profit assuming we DO hold a stock at the end of the day.
    // Initialize by "buying" the stock on day 0.
    int hold = -prices[0];

    for (size_t i = 1; i < prices.size(); i++) {
        // We need the state of cash from day i-1 to calculate the new hold state.
        int prevCash = cash;

        // Transition to Cash state:
        // 1. Rest: Keep the cash we had yesterday (cash).
        // 2. Sell: Sell the stock we were holding (hold + prices[i] - fee).
        cash = max(cash, hold + prices[i] - fee);

        // Transition to Hold state:
        // 1. Rest: Keep holding the stock we had yesterday (hold).
        // 2. Buy: Buy new stock using the cash we had yesterday (prevCash - prices[i]).
        hold = max(hold, prevCash - prices[i]);
    }

    // The result is always maximizing cash (not holding a volatile asset) at the end.
    return cash;
}