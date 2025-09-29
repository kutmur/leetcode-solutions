#include "S_495.h"

int Solution::findPoisonedDuration(std::vector<int>& timeSeries, int duration) {
    // According to constraints, timeSeries is not empty.
    // If it could be, we would add: if (timeSeries.empty()) return 0;
    
    int result = 0;
    
    // Iterate through the attacks, stopping before the last one.
    // For each attack, we calculate the duration it contributes until the next attack.
    for(int i = 0; i < timeSeries.size() - 1; i++){
        // Calculate the time difference between consecutive attacks.
        int time_gap = timeSeries[i + 1] - timeSeries[i];
        
        // If the next attack occurs after the current poison would have worn off,
        // the current attack contributes its full duration.
        if(time_gap >= duration){
            result += duration;
        }
        // Otherwise, the poison effect is cut short by the next attack.
        // The duration contributed is just the time until that next attack.
        else{
            result += time_gap;
        }
    }
    
    // The last attack is not followed by any other, so its poison effect
    // will always last for the full duration. Add it to the result.
    result += duration;

    return result;
}