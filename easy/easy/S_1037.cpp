#include "S_1037.h"

bool Solution::isBoomerang(std::vector<std::vector<int>>& p) {
    // A boomerang is defined as three points that are not collinear.
    // We check this using the cross product of the vectors AB and AC.
    // Vector AB = (p[1][0] - p[0][0], p[1][1] - p[0][1])
    // Vector AC = (p[2][0] - p[0][0], p[2][1] - p[0][1])
    // The 2D Cross Product is: (x_AB * y_AC) - (y_AB * x_AC)
    
    int x_AB = p[1][0] - p[0][0];
    int y_AB = p[1][1] - p[0][1];
    
    int x_AC = p[2][0] - p[0][0];
    int y_AC = p[2][1] - p[0][1];

    // If the cross product is non-zero, the area of the triangle formed is non-zero,
    // meaning the points are not collinear.
    return (x_AB * y_AC - y_AB * x_AC) != 0;
}