#include "S_3370.h"
#include <cmath> // For log2 and pow

int Solution::smallestNumber(int n) {
    // Calculate the number of bits needed to represent n.
    // (int)log2(n) gives the index of the most significant bit (0-based).
    // Adding 1 gives the total bit-length.
    int temp = log2(n) + 1;
    
    // Return 2^temp - 1.
    // This formula generates a number with 'temp' bits, all set to 1.
    // Example: temp = 4 -> pow(2, 4) - 1 = 16 - 1 = 15 (binary 1111)
    return pow(2, temp) - 1;
}