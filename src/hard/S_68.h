#ifndef S_68_H
#define S_68_H

#include <vector>
#include <string>

class Solution {
public:
    /**
     * @brief Formats a text (a vector of words) into fully justified lines of a specified width.
     * 
     * @param words A vector of strings representing the words of the text.
     * @param maxWidth The maximum width of each line.
     * @return A vector of strings, where each string is a formatted line.
     */
    std::vector<std::string> fullJustify(std::vector<std::string>& words, int maxWidth);
};

#endif // S_68_H