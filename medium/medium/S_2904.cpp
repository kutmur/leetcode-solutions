// S_2904.cpp
#include "S_2904.h"

using namespace std;

string Solution::shortestBeautifulSubstring(string s, int k) {
    int l = 0;
    int counter = 0;
    string ans = "";

    for (int r = 0; r < s.size(); r++) {
        if (s[r] == '1') {
            counter++;
        }

        while (counter > k) {
            if (s[l] == '1') {
                counter--;
            }
            l++;
        }

        if (counter == k) {
            while (l <= r && s[l] == '0') {
                l++;
            }

            string cur = s.substr(l, r - l + 1);

            if (ans.empty() ||
                cur.size() < ans.size() ||
                (cur.size() == ans.size() && cur < ans)) {
                ans = cur;
            }
        }
    }

    return ans;
}