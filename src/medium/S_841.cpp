#include "S_841.h"

// Note: The original code snippet implies a 'using namespace std;' context.
// This implementation will explicitly use std:: for clarity and good practice.
// To use the exact code from the prompt, you would typically have 'using namespace std;' at the top.
#include <vector>
#include <functional>

bool Solution::canVisitAllRooms(std::vector<std::vector<int>>& rooms) {
    int totalRooms = rooms.size();
    int visitedCount = 0;

    std::vector<bool> visited(totalRooms, false);

    // A recursive lambda function to perform Depth-First Search
    std::function<void(int)> dfs = [&](int currentRoom) {
        // If we have already visited this room, do nothing.
        if (visited[currentRoom]) {
            return;
        }

        // Mark the current room as visited and increment the count.
        visited[currentRoom] = true;
        visitedCount++;

        // For each key in the current room, visit the corresponding room.
        for (int nextRoom : rooms[currentRoom]) {
            dfs(nextRoom);
        }
    };
    
    // Start the traversal from room 0.
    dfs(0);

    // If the number of visited rooms equals the total number of rooms,
    // then all rooms are accessible.
    return visitedCount == totalRooms;
}