#include "S_68.h"

/**
 * The core logic is a greedy approach. We iterate through the words, packing as many as
 * possible onto each line. Once a line is full, we format it according to the rules.
 *
 * 1.  **Line Construction (Greedy Choice):**
 *     - We use two pointers, `i` (start of the current line's words) and `j` (current word being considered).
 *     - We keep adding words to the current line (by advancing `j`) as long as the total length
 *       (words + minimum single spaces) does not exceed `maxWidth`.
 *
 * 2.  **Line Formatting:**
 *     - After determining the words for a line (from `i` to `j-1`), we handle three cases for formatting:
 *
 *     - **Case A: Last Line or Single-Word Line:**
 *       - These lines are left-justified.
 *       - We append words separated by a single space.
 *       - The remaining space up to `maxWidth` is filled with trailing spaces.
 *
 *     - **Case B: Middle Lines (fully justified):**
 *       - Calculate the number of gaps between words (`numGaps = numWordsOnLine - 1`).
 *       - Calculate the total spaces to be distributed (`totalSpaces = maxWidth - lineWordLength`).
 *       - Distribute spaces as evenly as possible:
 *         - `baseSpacesPerGap = totalSpaces / numGaps`
 *         - `extraSpaces = totalSpaces % numGaps`
 *       - The first `extraSpaces` gaps get `baseSpacesPerGap + 1` spaces, and the rest get `baseSpacesPerGap`.
 *       - We build the string by adding words and the calculated spaces.
 *
 * 3.  **Iteration:**
 *     - After a line is formatted and stored, we set `i = j` to start processing the next line.
 *     - This continues until all words are processed.
 */
std::vector<std::string> Solution::fullJustify(std::vector<std::string>& words, int maxWidth) {
    std::vector<std::string> result;
    int i = 0; 
    int n = words.size();

    while (i < n) {
        int j = i;
        int lineWordLength = 0; 
        
        // Greedily find how many words can fit on the current line.
        // (j - i) represents the minimum number of spaces required between j-i+1 words.
        while (j < n && (lineWordLength + words[j].length() + (j - i)) <= maxWidth) {
            lineWordLength += words[j].length();
            j++;
        }
        
        std::string currentLine;
        currentLine.reserve(maxWidth); // Pre-allocate memory to avoid reallocations.
        
        int numWordsOnLine = j - i;
        int totalSpaces = maxWidth - lineWordLength;
        
        bool isLastLine = (j == n);
        bool isOneWordLine = (numWordsOnLine == 1);
        
        // Case A: Left-justify for the last line or a line with a single word.
        if (isLastLine || isOneWordLine) {
            for (int k = i; k < j; ++k) {
                currentLine += words[k];
                if (k < j - 1) { // Add one space after each word except the last one
                    currentLine += ' ';
                }
            }
            // Pad the rest of the line with spaces.
            currentLine += std::string(maxWidth - currentLine.length(), ' ');
        } 
        // Case B: Fully justify for middle lines.
        else {
            int numGaps = numWordsOnLine - 1;
            int baseSpacesPerGap = totalSpaces / numGaps;
            int extraSpaces = totalSpaces % numGaps;
            
            for (int k = i; k < j; ++k) {
                currentLine += words[k];
                if (k < j - 1) { // Don't add spaces after the last word on the line.
                    currentLine += std::string(baseSpacesPerGap, ' ');
                    if (extraSpaces > 0) {
                        currentLine += ' ';
                        extraSpaces--;
                    }
                }
            }
        }
        
        result.push_back(currentLine);

        // Move to the start of the next line.
        i = j;
    }
    
    return result;
}