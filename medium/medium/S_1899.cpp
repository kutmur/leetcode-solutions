#include "S_1899.h"

bool Solution::mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
    
    // Flags to track if we've found a valid triplet that
    // matches the target value at each position.
    bool firstTargetMatch = false;
    bool secondTargetMatch = false;
    bool thirdTargetMatch = false;

    // Iterate through each candidate triplet
    for (const vector<int>& candidate : triplets) {
        
        // Filter: We must ignore any triplet that has an element
        // larger than the corresponding target element. Using such a
        // triplet would make it impossible to ever form the target.
        if (candidate[0] > target[0] || candidate[1] > target[1] || candidate[2] > target[2]) {
            continue;
        }

        // Match: If the triplet is valid (passed the filter),
        // check if it contributes any of the exact target values.
        if (candidate[0] == target[0]) {
            firstTargetMatch = true;
        }
        if (candidate[1] == target[1]) {
            secondTargetMatch = true;
        }
        if (candidate[2] == target[2]) {
            thirdTargetMatch = true;
        }
    }

    // We can form the target if and only if we found a valid source
    // for all three target values.
    return firstTargetMatch && secondTargetMatch && thirdTargetMatch;
}