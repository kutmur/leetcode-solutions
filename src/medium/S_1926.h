#ifndef S_1926_H
#define S_1926_H

#include <vector>
#include <queue>
#include <utility>

class Solution {
public:
    /**
     * @brief Finds the shortest path from an entrance to the nearest exit in a maze.
     * 
     * The maze is represented by a grid of characters, where '.' is an empty cell and '+' is a wall.
     * The entrance is given as a coordinate pair. An exit is an empty cell on the border of the maze.
     * The entrance cell does not count as an exit.
     * 
     * @param maze A 2D vector of characters representing the maze. This maze is modified in-place.
     * @param entrance A vector of two integers [row, col] representing the starting position.
     * @return The number of steps in the shortest path from the entrance to the nearest exit.
     *         Returns -1 if no such path exists.
     */
    int nearestExit(std::vector<std::vector<char>>& maze, std::vector<int>& entrance);
};

#endif // S_1926_H