#include "S_326.h"

bool Solution::isPowerOfThree(int n) {
    // 1162261467 is 3^19.
    // Since 3 is a prime number, the only divisors of 3^19 are 3^0, 3^1, ..., 3^19.
    // Therefore, if n > 0 and 3^19 is divisible by n, n must be a power of three.
    // This assumes n is a 32-bit signed integer.
    
    return n > 0 && 1162261467 % n == 0;
}