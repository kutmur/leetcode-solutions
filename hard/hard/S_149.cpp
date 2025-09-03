#include "S_149.h"
#include <map>
#include <numeric>     // For std::gcd
#include <algorithm>   // For std::max
#include <utility>     // For std::pair

int Solution::maxPoints(std::vector<std::vector<int>>& points) {
    int n = points.size();
    if (n <= 2) {
        return n;
    }

    int global_max = 0;

    for (int i = 0; i < n; ++i) {
        // Map to store slope representation {dy, dx} -> count
        std::map<std::pair<int, int>, int> slopes;
        
        for (int j = i + 1; j < n; ++j) {
            int dx = points[j][0] - points[i][0];
            int dy = points[j][1] - points[i][1];

            // Vertical line case
            if (dx == 0) {
                // Use a special key like {1, 0} to represent infinite slope
                slopes[{1, 0}]++;
            } else {
                // Reduce the fraction dy/dx to its simplest form
                int common_divisor = std::gcd(dy, dx);
                int s_dy = dy / common_divisor;
                int s_dx = dx / common_divisor;

                // To ensure a canonical representation for the slope,
                // we can make the denominator always positive.
                if (s_dx < 0) {
                    s_dx = -s_dx;
                    s_dy = -s_dy;
                }
                
                slopes[{s_dy, s_dx}]++;
            }
        }

        // Find the maximum number of points that share a slope with point i
        int local_max = 0;
        if (!slopes.empty()) {
            for (auto const& [key, val] : slopes) {
                local_max = std::max(local_max, val);
            }
        }
        
        // The total number of points on this line is local_max (other points) + 1 (point i itself)
        global_max = std::max(global_max, local_max + 1);
    }

    return global_max;
}