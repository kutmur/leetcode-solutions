/* S_2125.cpp */

#include "S_2125.h"

int Solution::numberOfBeams(std::vector<std::string>& bank) {
    int result = 0;
    int prev = 0;

    // Handle the first row
    for (int i = 0; i < bank[0].size(); i++) {
        if (bank[0][i] == '1') {
            prev++;
        }
    }

    // Handle the rest of the rows
    for (int i = 1; i < bank.size(); i++) {
        int curr = 0;
        
        // Iterate through the *current* row (bank[i]), not bank[1]
        for (int j = 0; j < bank[i].size(); j++) {
            if (bank[i][j] == '1') {
                curr++;
            }
        }

        if (curr == 0) {
            // This row is empty, so we skip it. 
            // 'prev' remains the count from the last non-empty row.
            continue;
        } else {
            // This row has devices. Add beams and update 'prev'.
            result += curr * prev;
            prev = curr;
        }
    }

    return result;
}