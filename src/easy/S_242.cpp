#include "S_242.h"

bool Solution::isAnagram(string s, string t) {
    if(s.size() > t.size())
        return false;

    for(int i = 0; i < s.size(); i++) {
        int size = t.size();
        for(int j = 0; j < size; j++) {
            if(s[i] == t[j]) {
                t.erase(t.begin() + j);
                break;
            }
        }
    }

    return t.size() == 0;
}
