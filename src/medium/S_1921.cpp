#include "S_1921.h"
#include <vector>
#include <algorithm>

int Solution::eliminateMaximum(std::vector<int>& dist, std::vector<int>& speed) {
    int n = dist.size();
    std::vector<int> arrival(n);

    for (int i = 0; i < n; ++i)
        arrival[i] = (dist[i] + speed[i] - 1) / speed[i];

    std::sort(arrival.begin(), arrival.end());

    for (int i = 0; i < n; ++i) {
        if (arrival[i] <= i)
            return i;
    }
    return n;
}
