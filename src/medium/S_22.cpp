#include "S_22.h"

vector<string> Solution::generateParenthesis(int n) {
    vector<vector<string>> res(n + 1);
    res[0] = {""};

    for (int k = 0; k <= n; ++k) {
        for (int i = 0; i < k; ++i) {
            for (const string& left : res[i]) {
                for (const string& right : res[k - i - 1]) {
                    res[k].push_back("(" + left + ")" + right);
                }
            }
        }
    }

    return res[n];
}
