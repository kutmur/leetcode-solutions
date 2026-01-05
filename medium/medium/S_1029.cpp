#include "S_1029.h"

int Solution::twoCitySchedCost(std::vector<std::vector<int>>& costs) {
    // Sort based on the "opportunity cost" or difference (costA - costB).
    // If (costA - costB) is small (highly negative), it is much cheaper to send 
    // this person to A than to B. We want those people at the start of the array.
    std::sort(costs.begin(), costs.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return (a[0] - a[1]) < (b[0] - b[1]);
    });

    int totalCost = 0;
    int n = costs.size() / 2;

    // The first n people go to City A (because they had the best savings for A)
    for (int i = 0; i < n; ++i) {
        totalCost += costs[i][0];
    }

    // The remaining n people go to City B
    for (int i = n; i < 2 * n; ++i) {
        totalCost += costs[i][1];
    }

    return totalCost;
}