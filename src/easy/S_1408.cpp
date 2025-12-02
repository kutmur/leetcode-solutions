#include "S_1408.h"

std::vector<std::string> Solution::stringMatching(std::vector<std::string>& words) {
    std::vector<std::string> result;
    
    // Iterate through each word to check if it's a potential substring
    for (int i = 0; i < words.size(); i++) {
        // Iterate through each word to check if it contains the potential substring
        for (int j = 0; j < words.size(); j++) {
            // A word cannot be a substring of itself in this context
            if (i == j) {
                continue;
            }
            
            // Check if words[i] is a substring of words[j]
            // std::string::npos is returned if the substring is not found
            if (words[j].find(words[i]) != std::string::npos) {
                // If it's found, add it to the result
                result.push_back(words[i]);
                // Break the inner loop since we only need to find one match
                break; 
            }
        }
    }

    return result;
}