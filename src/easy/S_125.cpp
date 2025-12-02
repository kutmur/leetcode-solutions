#include "S_125.h"
#include <cctype>

bool Solution_125::isPalindrome(std::string s) {
    int l = 0, r = s.length() - 1;

    while (l < r) {
        while (l < r && !alphaNum(s[l])) l++;
        while (r > l && !alphaNum(s[r])) r--;
        if (tolower(s[l]) != tolower(s[r])) return false;
        l++;
        r--;
    }
    return true;
}

bool Solution_125::alphaNum(char c) {
    return (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z') ||
           (c >= '0' && c <= '9');
}
