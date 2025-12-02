#include "S_17.h"

std::vector<std::string> Solution::letterCombinations(std::string digits) {
    std::vector<std::string> result;
    
    // If the input string is empty, return an empty vector.
    if (digits.empty()) {
        return result;
    }
    
    // Mapping of digits to corresponding letters.
    std::vector<std::string> mapping = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz"  // 9
    };
    
    // Start the backtracking process from the first digit (index 0).
    solve(digits, 0, "", result, mapping);
    
    return result;
}

void Solution::solve(
    const std::string& digits,         
    int index,                         
    std::string currentCombination,    
    std::vector<std::string>& result,  
    const std::vector<std::string>& mapping
) {
    // Base case: If we have processed all digits, we have a complete combination.
    if (index == digits.length()) {
        result.push_back(currentCombination);
        return;
    }
    
    // Get the current digit and its corresponding letters.
    char currentDigit = digits[index];
    std::string letters = mapping[currentDigit - '0']; 

    // Iterate through each possible letter for the current digit.
    for (char letter : letters) {
        // 1. Choose: Add the letter to the current combination.
        currentCombination.push_back(letter);
        
        // 2. Explore: Recurse for the next digit.
        solve(digits, index + 1, currentCombination, result, mapping);
        
        // 3. Un-choose (Backtrack): Remove the letter to explore other possibilities.
        currentCombination.pop_back();
    }
}