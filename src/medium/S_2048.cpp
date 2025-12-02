#include "S_2048.h"
#include <utility> // For std::pair

// Use the std namespace for convenience in the .cpp file
using namespace std;

bool Solution::isBalanced(int n) {
    unordered_map<int, int> freq;
    bool all_equal = true;

    // Count frequencies of each digit
    while (n > 0) {
        freq[n % 10]++;
        n = n / 10;
    }

    // Check if digit value matches its frequency
    for (const auto& pair : freq) {
        if (pair.first != pair.second) {
            all_equal = false;
            break;
        }
    }
    return all_equal;
}

int Solution::nextBeautifulNumber(int n) {
    bool key = false;

    // Optimization: The next balanced number after 666666 is 1224444.
    // This hardcoded value skips a large, empty gap.
    if (n >= 666666) return 1224444; 
    
    // Brute-force check from n + 1 upwards
    while (!key) {
        n++;
        key = isBalanced(n);
    }
    return n;
}