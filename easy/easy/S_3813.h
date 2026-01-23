#pragma once
#include <string>
#include <vector>

class Solution {
public:
    /**
     * Calculates the score based on the ratio of vowels to consonants.
     * Score = floor(vowels / consonants). Returns 0 if no consonants exist.
     * * @param s The input string containing lowercase letters, spaces, or digits.
     * @return The calculated integer score.
     */
    int vowelConsonantScore(std::string s);

private:
    // Helper to determine if a character is a vowel
    bool isVowel(char ch);
};