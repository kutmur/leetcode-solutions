#include "S_2085.h"

int Solution::countWords(vector<string>& words1, vector<string>& words2) {
    unordered_map<string, int> freq1, freq2;

    for (const string& word : words1)
        freq1[word]++;
    for (const string& word : words2)
        freq2[word]++;

    int counter = 0;
    for (const auto& [word, count1] : freq1)
        if (count1 == 1 && freq2[word] == 1)
            counter++;

    return counter;
}
