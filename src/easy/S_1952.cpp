#include "S_1952.h"
#include <cmath>

// Helper function to check if a number is prime
bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}

bool Solution::isThree(int n) {
    int root = sqrt(n);
    return root * root == n && isPrime(root);
}
