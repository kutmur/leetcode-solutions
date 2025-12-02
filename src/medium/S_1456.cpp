#include "S_1456.h"
#include <algorithm>

int Solution::maxVowels(string s, int k) {
    int current = 0, maxCount = 0;
    string vowels = "aeiou";
    
    for (int i = 0; i < k; i++) {
        if (vowels.find(s[i]) != string::npos)
            current++;
    }
    maxCount = current;

    for (int j = k; j < s.size(); j++) {
        if (vowels.find(s[j]) != string::npos)
            current++;
        if (vowels.find(s[j - k]) != string::npos)
            current--;
        maxCount = max(maxCount, current);
    }

    return maxCount;
}
