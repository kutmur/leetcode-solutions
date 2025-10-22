#include "S_1861.h"

/**
 * @brief Implementation of the numOfUnplacedFruits method.
 */
int Solution::numOfUnplacedFruits(std::vector<int>& fruits, std::vector<int>& baskets) {
    // result tracks the count of *successfully placed* fruits.
    int result = 0;
    
    // Iterate through each fruit one by one.
    for(int i = 0; i < fruits.size(); i++){
        
        // For the current fruit, find the first basket it fits in.
        for(int j = 0; j < baskets.size(); j++){
            
            // Check if the fruit's size is less than or equal to the basket's capacity.
            if(fruits[i] <= baskets[j]){
                
                // If it fits, "use" the basket by removing it from the vector.
                // This is an O(n) operation on the vector.
                baskets.erase(baskets.begin() + j);
                
                // Increment the count of placed fruits.
                result++;
                
                // This fruit is placed, so break from the inner loop
                // and move to the next fruit (i+1).
                break; 
            }
        }
    }
    
    // The number of unplaced fruits is the total count minus the placed count.
    return fruits.size() - result;
}