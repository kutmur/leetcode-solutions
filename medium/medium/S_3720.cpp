// File: S_LexGreaterPermutation.cpp
#include "S_LexGreaterPermutation.h"
#include <string>
#include <array>

using namespace std;

string Solution::lexGreaterPermutation(string s, string target) {
    int n = s.size();

    for (int i = n - 1; i >= 0; --i) {
        array<int, 26> freq{};
        for (char c : s) {
            freq[c - 'a']++;
        }

        bool possible = true;

        for (int j = 0; j < i; ++j) {
            int x = target[j] - 'a';
            if (freq[x] == 0) {
                possible = false;
                break;
            }
            freq[x]--;
        }

        if (!possible) {
            continue;
        }

        int cur = target[i] - 'a';

        for (int c = cur + 1; c < 26; ++c) {
            if (freq[c] == 0) {
                continue;
            }

            string ans = target.substr(0, i);
            ans += char('a' + c);

            freq[c]--;

            for (int x = 0; x < 26; ++x) {
                ans += string(freq[x], char('a' + x));
            }

            return ans;
        }
    }

    return "";
}