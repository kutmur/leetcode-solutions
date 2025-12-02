#include "Solution.h"

/**
 * @brief Implementation of the addBinary method.
 *
 * This function simulates elementary school addition, but in base-2.
 * It iterates from the least significant bit (rightmost) to the
 * most significant bit (leftmost), managing a 'carry' at each step.
 */
std::string Solution::addBinary(std::string a, std::string b) {
    std::string result = "";
    int i = a.size() - 1; // Pointer for string 'a'
    int j = b.size() - 1; // Pointer for string 'b'
    int carry = 0;

    // Loop continues as long as there are digits in either string
    // or a final carry remains.
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        // Add the digit from 'a' if it exists
        if (i >= 0) {
            sum += a[i--] - '0'; // Convert char '0'/'1' to int 0/1
        }
        
        // Add the digit from 'b' if it exists
        if (j >= 0) {
            sum += b[j--] - '0';
        }

        // The current bit for the result is the remainder after dividing by 2
        // (e.g., 0+0=0, 1+0=1, 1+1=0 w/ carry, 1+1+1=1 w/ carry)
        result += (sum % 2) + '0'; // Convert int 0/1 back to char '0'/'1'
        
        // The new carry is the quotient after dividing by 2
        carry = sum / 2;
    }

    // The result was built from LSB to MSB (backwards),
    // so it must be reversed before returning.
    std::reverse(result.begin(), result.end());
    
    return result;
}