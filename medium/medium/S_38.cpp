#include "S_38.h"

using std::string;
using std::to_string;

string Solution::countAndSay(int n) {
    // Base case: the sequence starts with "1"
    string s = "1";

    // Generate terms from 2 to n
    for (int i = 1; i < n; i++) {
        string next = "";
        int cnt = 1;

        // Iterate through the current string to build the next one
        for (int j = 1; j <= s.size(); j++) {
            // Check if we are still on the same character
            if (j < s.size() && s[j] == s[j - 1]) {
                cnt++;
            } else {
                // We reached the end of a run of identical characters
                // Append the count followed by the character itself
                next += to_string(cnt);
                next.push_back(s[j - 1]);
                
                // Reset count for the next character group
                cnt = 1;
            }
        }
        // Update s to be the newly generated string
        s = next;
    }
    return s;
}