#include "S_345.h"
#include <algorithm>

string Solution::reverseVowels(string s) {
    int right = s.size() - 1;
    int left = 0;
    string target = "aeiouAEIOU";

    while (left < right) {
        if (target.find(s[right]) != string::npos && target.find(s[left]) != string::npos) {
            swap(s[right], s[left]);
            left++;
            right--;
        } else {
            if (target.find(s[left]) == string::npos)
                left++;
            if (target.find(s[right]) == string::npos)
                right--;
        }
    }
    return s;
}
