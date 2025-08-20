#include "S_1282.h"
#include <unordered_map>

std::vector<std::vector<int>> S_1282::groupThePeople(std::vector<int>& groupSizes) {
    std::vector<std::vector<int>> result;
    std::unordered_map<int, std::vector<int>> tempGroups;

    for (int i = 0; i < groupSizes.size(); ++i) {
        int requiredSize = groupSizes[i];

        // Add the current person 'i' to the temporary group for their required size.
        tempGroups[requiredSize].push_back(i);
        
        // If the group is now full...
        if (tempGroups[requiredSize].size() == requiredSize) {
            // ...move it to the final result list...
            result.push_back(tempGroups[requiredSize]);
            // ...and remove the entry from the map to start a new group of this size.
            tempGroups.erase(requiredSize);
        }
    }
    
    return result;
}