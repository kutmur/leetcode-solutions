// S_3517.cpp
#include "S_3517.h"
#include <unordered_map>

std::string Solution::smallestPalindrome(std::string s) {
    std::unordered_map<char, int> map;
    std::string result = "";
    int counter = 0;
    char odd_char = '\0';
    bool odd_number_bool = false;

    for (char c : s) {
        map[c]++;
    }

    for (int i = 97; i < 173; ++i) {
        if (map[i] == 0) {
            continue;
        } else if (map[i] % 2 == 0) {
            int temp = map[i] / 2;
            result.insert(result.begin() + counter, map[i], static_cast<char>(i));
            counter += temp;
        } else {
            int temp = map[i] / 2;
            result.insert(result.begin() + counter, map[i] - 1, static_cast<char>(i));
            counter += temp;
            odd_char = static_cast<char>(i);
            odd_number_bool = true;
        }
    }

    if (odd_number_bool) {
        result.insert(result.begin() + counter, odd_char);
    }

    return result;
}