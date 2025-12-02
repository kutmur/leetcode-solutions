#include "S_2379.h"
#include <algorithm>

int Solution::minimumRecolors(std::string tileRow, int windowSize) {
    int whiteCount = 0;

    // Count 'W' in the first window
    for (int index = 0; index < windowSize; index++) {
        if (tileRow[index] == 'W') 
            whiteCount++;
    }

    int minWhiteRecolors = whiteCount;

    // Slide the window across the string
    for (int right = windowSize; right < tileRow.size(); right++) {
        if (tileRow[right - windowSize] == 'W') 
            whiteCount--; 
        if (tileRow[right] == 'W') 
            whiteCount++; 
        
        minWhiteRecolors = std::min(minWhiteRecolors, whiteCount);
    }

    return minWhiteRecolors;
}
