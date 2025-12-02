// S_274.cpp
#include "S_274.h"
#include <algorithm>

int Solution::hIndex(std::vector<int>& citations) {
    std::sort(citations.begin(), citations.end());
    int n = citations.size();
    for (int i = 0; i < n; i++) {
        int h = n - i;
        if (citations[i] >= h)
            return h;
    }
    return 0;
}
