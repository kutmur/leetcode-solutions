#include "S_1189.h"

int Solution::maxNumberOfBalloons(std::string text) {
    // Frequency table for all 26 lowercase letters
    // Using vector is generally faster than unordered_map for fixed small alphabets
    std::vector<int> freq(26, 0);

    for (char c : text) {
        freq[c - 'a']++;
    }

    // "balloon" requires:
    // 1 'b', 1 'a', 2 'l', 2 'o', 1 'n'
    int b = freq['b' - 'a'];
    int a = freq['a' - 'a'];
    int l = freq['l' - 'a'];
    int o = freq['o' - 'a'];
    int n = freq['n' - 'a'];

    // The limiting factor is the character with the minimum ratio of (available / required)
    // For 'l' and 'o', we divide available count by 2.
    return std::min({b, a, l / 2, o / 2, n});
}

int Solution::getCharIndex(char c) {
    return c - 'a';
}