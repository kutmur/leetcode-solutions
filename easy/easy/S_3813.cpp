#include "S_3813.h"

int Solution::vowelConsonantScore(std::string s) {
    int v = 0; // Vowel count
    int c = 0; // Consonant count

    for (char ch : s) {
        if (isVowel(ch)) {
            v++;
        }
        // Check if it is a lowercase letter but NOT a vowel
        // This implicitly filters out spaces and digits
        else if (ch >= 'a' && ch <= 'z') {
            c++;
        }
    }

    // Avoid division by zero
    if (c == 0) return 0;
    
    // Integer division automatically handles the floor operation
    return v / c;
}

bool Solution::isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}