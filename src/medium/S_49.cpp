#include "S_49.h"
#include <unordered_map>

std::vector<std::vector<std::string>> Solution::groupAnagrams(std::vector<std::string>& inputStrings) {
    std::unordered_map<std::string, std::vector<std::string>> anagramGroups;
    for (const auto& currentString : inputStrings) {
        std::vector<int> characterFrequencies(26, 0);
        for (char character : currentString) {
            characterFrequencies[character - 'a']++;
        }
        std::string signature = std::to_string(characterFrequencies[0]);
        for (int index = 1; index < 26; ++index) {
            signature += ',' + std::to_string(characterFrequencies[index]);
        }
        anagramGroups[signature].push_back(currentString);
    }
    std::vector<std::vector<std::string>> groupedAnagrams;
    for (const auto& group : anagramGroups) {
        groupedAnagrams.push_back(group.second);
    }
    return groupedAnagrams;
}
