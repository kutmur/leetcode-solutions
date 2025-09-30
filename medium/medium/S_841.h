#ifndef S_841_H
#define S_841_H

#include <vector>
#include <functional>

// LeetCode Problem 841: Keys and Rooms

class Solution {
public:
    /**
     * @brief Determines if all rooms can be visited starting from room 0.
     * @param rooms A list of lists of integers, where rooms[i] is a list of keys in room i.
     * @return True if all rooms can be visited, false otherwise.
     */
    bool canVisitAllRooms(std::vector<std::vector<int>>& rooms);
};

#endif // S_841_H