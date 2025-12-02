// S_151.cpp
#include "S_151.h"
#include <sstream>
#include <vector>
#include <algorithm>

std::string Solution::reverseWords(std::string s) {
    std::istringstream iss(s);
    std::string word;
    std::vector<std::string> words;

    while (iss >> word)
        words.push_back(word);

    std::reverse(words.begin(), words.end());

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += " ";
        result += words[i];
    }
    return result;
}
