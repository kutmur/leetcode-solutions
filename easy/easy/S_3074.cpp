#include "S_3074.h"

int Solution::minimumBoxes(std::vector<int>& apple, std::vector<int>& capacity) {
    // 1. Calculate the total number of apples to be redistributed
    int totalApples = 0;
    for (int count : apple) {
        totalApples += count;
    }

    // 2. Sort capacities to access the largest boxes first (Greedy Strategy)
    std::sort(capacity.begin(), capacity.end());

    int boxesUsed = 0;
    int currentCapacity = 0;
    int i = capacity.size() - 1;

    // 3. Greedily fill the largest boxes until total apples are covered
    while (i >= 0 && currentCapacity < totalApples) {
        currentCapacity += capacity[i];
        boxesUsed++;
        i--;
    }

    return boxesUsed;
}