#include "S_567.h"
#include <vector>

bool Solution::checkInclusion(std::string s1, std::string s2) {
    if (s1.length() > s2.length()) return false;

    std::vector<int> s1Count(26, 0), s2Count(26, 0);
    for (int i = 0; i < s1.length(); i++) {
        s1Count[s1[i] - 'a']++;
        s2Count[s2[i] - 'a']++;
    }

    int matches = 0;
    for (int i = 0; i < 26; i++)
        if (s1Count[i] == s2Count[i])
            matches++;

    int l = 0;
    for (int r = s1.length(); r < s2.length(); r++) {
        if (matches == 26)
            return true;

        int idxAdd = s2[r] - 'a';
        s2Count[idxAdd]++;
        if (s1Count[idxAdd] == s2Count[idxAdd])
            matches++;
        else if (s1Count[idxAdd] + 1 == s2Count[idxAdd])
            matches--;

        int idxRem = s2[l] - 'a';
        s2Count[idxRem]--;
        if (s1Count[idxRem] == s2Count[idxRem])
            matches++;
        else if (s1Count[idxRem] - 1 == s2Count[idxRem])
            matches--;
        l++;
    }
    return matches == 26;
}
