#include "S_2443.h"

bool Solution::sumOfNumberAndReverse(int num) {
    // Optimization: We only need to iterate up to 'num'.
    // Logic: If i > num, then i + reverse(i) will certainly be > num.
    // The problem constraint is num <= 100,000, making O(N) linear scan acceptable.
    for (int i = 0; i <= num; i++) {
        if (i + reverseInt(i) == num) {
            return true;
        }
    }
    return false;
}

int Solution::reverseInt(int x) {
    int rev = 0;
    while (x > 0) {
        // Standard digit extraction and appending
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return rev;
}