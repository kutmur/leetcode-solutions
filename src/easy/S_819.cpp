#include "S_819.h"
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <algorithm>
#include <cctype>

std::string Solution::mostCommonWord(std::string paragraph, std::vector<std::string>& banned) {
    std::unordered_set<std::string> bannedSet(banned.begin(), banned.end());
    std::unordered_map<std::string, int> freq;

    // Replace all punctuation with spaces
    for (char& ch : paragraph)
        if (ispunct(ch))
            ch = ' ';

    // Convert to lowercase
    std::transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);

    std::istringstream iss(paragraph);
    std::string word, mostCommon;
    int maxFreq = 0;

    while (iss >> word) {
        if (bannedSet.count(word)) continue;
        freq[word]++;
        if (freq[word] > maxFreq) {
            maxFreq = freq[word];
            mostCommon = word;
        }
    }

    return mostCommon;
}
