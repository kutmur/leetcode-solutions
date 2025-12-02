#ifndef S_17_H
#define S_17_H

#include <vector>
#include <string>

class Solution {
public:
    /**
     * @brief Given a string containing digits from 2-9 inclusive, return all possible
     * letter combinations that the number could represent.
     * 
     * @param digits A string containing digits from '2' to '9'.
     * @return A vector of strings with all possible letter combinations.
     */
    std::vector<std::string> letterCombinations(std::string digits);

private:
    /**
     * @brief A recursive helper function to generate letter combinations using backtracking.
     * 
     * @param digits The original input string of digits.
     * @param index The current digit index to process.
     * @param currentCombination The combination built so far.
     * @param result The vector to store the final combinations.
     * @param mapping The mapping from digits to letters.
     */
    void solve(
        const std::string& digits,         
        int index,                         
        std::string currentCombination,    
        std::vector<std::string>& result,  
        const std::vector<std::string>& mapping
    );
};

#endif // S_17_H