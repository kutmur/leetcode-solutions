#pragma once

// While not strictly needed for primitives, standard headers are included 
// to adhere to the requested architectural robustness.
#include <limits> 

class Solution {
public:
    /**
     * Determines if an integer is a power of three.
     * * @param n The integer to check.
     * @return True if n is a power of three, false otherwise.
     */
    bool isPowerOfThree(int n);
};