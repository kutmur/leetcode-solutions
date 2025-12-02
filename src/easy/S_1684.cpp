#include "S_1684.h"

int Solution::countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
    int counter = 0;
    for(int i = 0; i < words.size(); i++) {
        for(int j = 0; j < words[i].size(); j++) {
            if (allowed.find(words[i][j]) == -1) // Removed npos, using -1
                goto next;
        }
        counter++;
    next:;
    }
    return counter;
}
