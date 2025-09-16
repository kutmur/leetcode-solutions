// S_30.cpp
#include "S_30.h"

std::vector<int> Solution::findSubstring(std::string s, std::vector<std::string>& words) {
    if (s.empty() || words.empty()) {
        return {};
    }

    int numWords = words.size();
    int wordLen = words[0].length();
    int totalLen = numWords * wordLen;

    if (s.length() < totalLen) {
        return {};
    }

    std::unordered_map<std::string, int> wordCounts;
    for (const std::string& word : words) {
        wordCounts[word]++;
    }

    std::vector<int> result;

    // Iterate through all possible starting offsets (0 to wordLen - 1)
    for (int i = 0; i < wordLen; ++i) {
        std::unordered_map<std::string, int> seen;
        int left = i;
        int count = 0;

        // Use a sliding window j that moves one word at a time
        for (int j = i; j <= (int)s.length() - wordLen; j += wordLen) {
            std::string word = s.substr(j, wordLen);

            if (wordCounts.count(word)) {
                // Word is one we are looking for
                seen[word]++;
                count++;

                // If we have seen this word too many times, shrink the window from the left
                while (seen[word] > wordCounts[word]) {
                    std::string leftWord = s.substr(left, wordLen);
                    seen[leftWord]--;
                    count--;
                    left += wordLen;
                }

                // If the window size matches the number of words, we found a solution
                if (count == numWords) {
                    result.push_back(left);
                    
                    // Slide the window forward by one word to continue searching
                    std::string leftWord = s.substr(left, wordLen);
                    seen[leftWord]--;
                    count--;
                    left += wordLen;
                }
            } else {
                // Word is not in our list, so it breaks the concatenation.
                // Reset the window and move the left pointer past this invalid word.
                seen.clear();
                count = 0;
                left = j + wordLen;
            }
        }
    }

    return result;
}