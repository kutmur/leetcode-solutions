#include "S_461.h"

/**
 * @brief Implementation of the hammingDistance method.
 */
int Solution::hammingDistance(int x, int y) {
    // 1. Perform a bitwise XOR between x and y.
    // The result will have a '1' bit at each position where the bits of x and y differ,
    // and a '0' where they are the same.
    int xor_result = x ^ y;

    // 2. Count the number of set bits ('1's) in the XOR result.
    // This count is exactly the Hamming distance.
    // __builtin_popcount is a GCC/Clang built-in function that efficiently
    // counts the number of set bits in an integer (its "population count").
    // It's highly optimized and often compiles to a single CPU instruction.
    return __builtin_popcount(xor_result);
}