#include "S_3461.h"
#include <string> // Required for std::to_string

/**
 * @brief Executes the digit reduction simulation.
 *
 * This function repeatedly takes the input string 's', calculates the
 * sum of adjacent digits (mod 10), and forms a new string from
 * these sums. This process repeats until the string length is 2.
 * It then returns whether the two remaining digits are identical.
 *
 * @param s The initial string of digits.
 * @return true if the final two digits are equal, false otherwise.
 */
bool Solution::hasSameDigits(std::string s) {
    // Loop until the string is reduced to exactly 2 characters
    while(s.size() > 2){
        std::string temp = ""; // Temporary string to build the next iteration
        
        // Iterate through all adjacent pairs
        for(int i = 0; i < s.size() - 1; i++){
            // Convert characters to integers
            int temp1 = s[i] - '0';
            int temp2 = s[i + 1] - '0';
            
            // Calculate the sum modulo 10
            int temp3 = (temp1 + temp2) % 10;
            
            // Convert the result back to a string and append
            std::string temp4 = std::to_string(temp3);
            temp += temp4;
        }
        // Assign the newly formed string back to s for the next loop iteration
        s = temp;
    }
    
    // After the loop, s.size() is 2. Compare the two remaining characters.
    return s[0] == s[1];        
}