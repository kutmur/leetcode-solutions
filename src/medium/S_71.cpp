#include "S_71.h"

string Solution::simplifyPath(string path) {
    stack<string> st;
    string temp;
    stringstream ss(path);

    while (getline(ss, temp, '/')) {
        if (temp == "" || temp == ".") 
            continue;
        else if (temp == "..") {
            if (!st.empty())
                st.pop();
        } else
            st.push(temp);
    }

    string result = "";
    while (!st.empty()) {
        result = "/" + st.top() + result;
        st.pop();
    }

    return result == "" ? "/" : result;
}
