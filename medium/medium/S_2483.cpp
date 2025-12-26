#include "S_2483.h"

using namespace std;

int Solution::bestClosingTime(string customers) {
    int n = customers.size();
    
    // Initial penalty: If we close at hour 0, the penalty is the total count of 'Y's
    // (because we missed every customer).
    int penalty = 0;
    for(char c : customers) {
        if(c == 'Y') penalty++;
    }

    int bestPenalty = penalty;
    int bestHour = 0;

    // Iterate through each hour to simulate moving the closing time forward.
    // i represents the 0-indexed character in the string, which corresponds to the hour (i + 1).
    for(int i = 0; i < n; i++) {
        // If the current hour has a customer ('Y'):
        // Opening at this hour reduces penalty because we no longer miss this customer.
        if(customers[i] == 'Y') {
            penalty--;   
        }
        // If the current hour has no customer ('N'):
        // Opening at this hour increases penalty because the shop is open idly.
        else {
            penalty++;   
        }

        // Check if the calculated penalty for closing at (i + 1) is strictly better
        // than the best found so far. We want the *earliest* hour, so we use strictly less (<).
        if(penalty < bestPenalty) {
            bestPenalty = penalty;
            bestHour = i + 1;
        }
    }

    return bestHour;
}