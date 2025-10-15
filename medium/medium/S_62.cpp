#include "S_62.h"
#include <algorithm> // For std::max

long long Solution::combinations(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }
    // Use the symmetry property C(n, k) = C(n, n-k) to speed up calculation
    if (k > n / 2) {
        k = n - k;
    }
    long long res = 1;
    // Iteratively compute (n * (n-1) * ... * (n-k+1)) / (k * (k-1) * ... * 1)
    for (int i = 1; i <= k; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int Solution::uniquePaths(int m, int n) {
    // Number of right moves required
    int r = n - 1;
    // Number of down moves required
    int d = m - 1;
    
    // Total moves = r + d. We need to find C(r+d, r) or C(r+d, d).
    // They are equal, so the max function is not strictly necessary but works.
    return combinations(r + d, r);
}