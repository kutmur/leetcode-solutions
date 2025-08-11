#include "S_43.h"
#include <vector>

using std::string;
using std::vector;

string Solution::multiply(string a, string b) {
    if (a == "0" || b == "0") return "0";
    int n = (int)a.size(), m = (int)b.size();
    vector<int> res(n + m, 0);

    for (int i = n - 1; i >= 0; --i) {
        int da = a[i] - '0';
        for (int j = m - 1; j >= 0; --j) {
            int db = b[j] - '0';
            int p = da * db + res[i + j + 1];
            res[i + j + 1] = p % 10;
            res[i + j] += p / 10;
        }
    }

    int k = 0;
    while (k < (int)res.size() && res[k] == 0) ++k;

    string out;
    out.reserve((int)res.size() - k);
    for (; k < (int)res.size(); ++k) out.push_back(char('0' + res[k]));
    return out.empty() ? "0" : out;
}
