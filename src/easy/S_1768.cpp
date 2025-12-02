#include "S_1768.h"

string Solution::mergeAlternately(string word1, string word2) {
    string result = "";
    int size1 = word1.size();
    int size2 = word2.size();
    int longOne = max(size1, size2);
    for (int i = 0; i < longOne; i++) {
        if (size1 > i)
            result += word1[i];
        if (size2 > i)
            result += word2[i];
    }
    return result;
}
