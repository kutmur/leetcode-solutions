#include "S_3075.h"

long long Solution::maximumHappinessSum(std::vector<int>& happiness, int k) {
    // Sort the happiness values in ascending order.
    // We will iterate from the end to access the largest values first.
    std::sort(happiness.begin(), happiness.end());
    
    long long totalHappiness = 0;
    int turns = 0;
    int n = happiness.size();
    
    // Select k children, starting from the one with the highest base happiness
    for (int i = n - 1; i >= 0 && turns < k; --i) {
        // Calculate the effective happiness: base value minus the number of turns passed.
        // If the result is negative, it contributes 0.
        long long currentVal = happiness[i] - turns;
        
        if (currentVal > 0) {
            totalHappiness += currentVal;
        } else {
            // Optimization: Since the array is sorted, if the current largest value 
            // has decayed to <= 0, all subsequent smaller values will also be <= 0.
            break; 
        }
        
        turns++;
    }
    
    return totalHappiness;
}