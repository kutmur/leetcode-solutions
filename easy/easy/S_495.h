#ifndef S_495_H
#define S_495_H

#include <vector>

class Solution {
public:
    /**
     * @brief Calculates the total duration for which the target is poisoned.
     * 
     * In Teemo's Attack, our hero Teemo attacks an enemy at certain time points.
     * When Teemo attacks at time t, the enemy gets poisoned for a specific duration. 
     * If Teemo attacks again before the poison effect ends, the poison effect will be reset, 
     * and the poison timer will start from the new attack time.
     * This function calculates the total time the enemy is in a poisoned state.
     * 
     * @param timeSeries A sorted integer array of attack time points.
     * @param duration The duration of the poison effect for each attack.
     * @return The total time in seconds that the enemy is poisoned.
     */
    int findPoisonedDuration(std::vector<int>& timeSeries, int duration);
};

#endif // S_495_H