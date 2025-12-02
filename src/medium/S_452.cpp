#include "S_452.h"
#include <algorithm> // for std::sort
#include <vector>

int Solution::findMinArrowShots(std::vector<std::vector<int>>& points) {
    if (points.empty()) {
        return 0;
    }

    // Sort the balloons based on their end coordinates.
    // This greedy approach works because we prioritize bursting the balloon that ends earliest.
    // By shooting an arrow at its end point, we maximize the chance of hitting subsequent balloons.
    std::sort(points.begin(), points.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] < b[1];
    });

    int arrows = 1;
    // The first arrow is shot at the end of the first balloon.
    int arrowPos = points[0][1];

    // Iterate through the rest of the balloons.
    for (size_t i = 1; i < points.size(); ++i) {
        // If the current balloon's start is after the last arrow position,
        // it cannot be burst by the previous arrow.
        if (points[i][0] > arrowPos) {
            // We need a new arrow.
            arrows++;
            // Update the arrow position to the end of the current balloon.
            arrowPos = points[i][1];
        }
        // Otherwise, the current balloon is already burst by the arrow at arrowPos.
        // No action is needed as the current arrow covers it.
    }
    return arrows;
}