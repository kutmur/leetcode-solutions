#include "S_1790.h"

//{
//    vector<int> freq(26, 0);
//
//    for (char c : s1) freq[c - 'a']++;
//    for (char c : s2) freq[c - 'a']--;
//
//    for (int count : freq) {
//        if (count != 0) return false;
//    }
//
//    int counter = 0;
//
//    for (int i = 0; i < s1.size(); i++) {
//        if (s1[i] != s2[i]) {
//            counter++;
//        }
//    }
//
//    return (counter == 0 || counter == 2);
//    }