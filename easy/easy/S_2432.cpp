// S_2432.cpp
#include "S_2432.h"

int Solution::hardestWorker(int n, std::vector<std::vector<int>>& logs) {
    (void)n; // Unused parameter per problem definition
    
    int bestId = logs[0][0];
    int maxDuration = logs[0][1];

    for (int i = 1; i < static_cast<int>(logs.size()); ++i) {
        int duration = logs[i][1] - logs[i - 1][1];

        if (duration > maxDuration || (duration == maxDuration && logs[i][0] < bestId)) {
            maxDuration = duration;
            bestId = logs[i][0];
        }
    }

    return bestId;
}