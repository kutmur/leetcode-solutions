#include "S_53.h"
#include <algorithm>

int Solution::maxSubArray(std::vector<int>& a) {
    int cur = a[0], best = a[0];
    for (int i = 1; i < (int)a.size(); ++i) {
        cur = std::max(a[i], cur + a[i]);
        best = std::max(best, cur);
    }
    return best;
}
