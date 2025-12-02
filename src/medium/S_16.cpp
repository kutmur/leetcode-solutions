#include "S_16.h"
#include <climits> // For INT_MAX
#include <cmath>   // For abs()

int Solution::threeSumClosest(std::vector<int>& nums, int target) {
    // Initialize min_diff to the largest possible integer value.
    int min_diff = INT_MAX; 
    
    // This will store the sum that is closest to the target.
    int closest_sum = 0; 
    
    int n = nums.size();

    // Outer loop for the first element
    for(int i = 0; i < n; i++){
        // Middle loop for the second element (j > i)
        for(int j = i + 1; j < n; j++){
            // Inner loop for the third element (k > j)
            for(int k = j + 1; k < n; k++){
                
                // Calculate the sum of the current triplet
                int current_sum = nums[i] + nums[j] + nums[k];
                
                // Calculate the absolute difference from the target
                int current_diff = std::abs(target - current_sum);
                
                // If this triplet's sum is closer than any we've seen, update.
                if(current_diff < min_diff){
                    min_diff = current_diff;
                    closest_sum = current_sum;
                }
            }
        }
    }
    
    // Return the closest sum found after checking all combinations.
    return closest_sum;
}