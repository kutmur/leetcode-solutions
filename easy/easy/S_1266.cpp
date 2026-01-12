#include "S_1266.h"

int Solution::minTimeToVisitAllPoints(std::vector<std::vector<int>>& points) {
    int totalTime = 0;
    
    // Iterate through the path from the first point to the last
    for (size_t i = 1; i < points.size(); ++i) {
        // Calculate the absolute differences in X and Y coordinates
        int deltaX = std::abs(points[i][0] - points[i - 1][0]);
        int deltaY = std::abs(points[i][1] - points[i - 1][1]);
        
        // In this geometry (Chebyshev distance), the time to travel between two points
        // is determined by the maximum of the horizontal or vertical distance.
        // This is because a diagonal move reduces both X and Y distance by 1 simultaneously.
        totalTime += std::max(deltaX, deltaY);
    }
    
    return totalTime;
}