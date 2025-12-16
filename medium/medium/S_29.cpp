#include "S_29.h"

int Solution::divide(int dividend, int divisor) {
    // Phase 1: Edge Case Handling
    // The only case where division results in a 32-bit integer overflow is
    // when dividing the minimum possible integer (INT_MIN) by -1.
    // INT_MIN is -2147483648, while INT_MAX is 2147483647.
    // -2147483648 / -1 = 2147483648, which exceeds INT_MAX.
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    // Phase 2: Standard Operation
    // Perform standard integer division for all safe inputs.
    return dividend / divisor;
}