#include "S_875.h"
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

int Solution::minEatingSpeed(std::vector<int>& piles, int h) {
    int l = 1;
    int r = *std::max_element(piles.begin(), piles.end());
    int res = r;

    while (l <= r) {
        int k = l + (r - l) / 2; // Avoid potential overflow

        long long totalTime = 0;
        for (int p : piles) {
            totalTime += static_cast<long long>(ceil(static_cast<double>(p) / k));
        }

        if (totalTime <= h) {
            // This speed is feasible, try to find a smaller one
            res = k;
            r = k - 1;
        } else {
            // This speed is too slow, must increase it
            l = k + 1;
        }
    }
    return res;
}