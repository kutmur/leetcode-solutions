#include "S_1657.h"
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

bool Solution::closeStrings(std::string word1, std::string word2) {
    if (word1.size() != word2.size())
        return false;

    std::unordered_map<char, int> mp1, mp2;
    for (char c : word1)
        mp1[c]++;
    for (char c : word2)
        mp2[c]++;

    std::unordered_set<char> set1, set2;
    for (auto& p : mp1) 
        set1.insert(p.first);
    for (auto& p : mp2) 
        set2.insert(p.first);
    if (set1 != set2) 
        return false;

    std::vector<int> freq1, freq2;
    for (auto& p : mp1) 
        freq1.push_back(p.second);
    for (auto& p : mp2) 
        freq2.push_back(p.second);

    std::sort(freq1.begin(), freq1.end());
    std::sort(freq2.begin(), freq2.end());

    return freq1 == freq2;
}
