#include "S_2390.h"
#include <stack>

string Solution::removeStars(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '*') st.pop();
        else st.push(c);
    }
    
    string result;
    while (!st.empty()) {
        result.insert(result.begin(), st.top());
        st.pop();
    }
    return result;
}
