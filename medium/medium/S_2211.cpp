#include "S_2211.h"

int Solution::countCollisions(string directions) {
    stack<char> st;
    int collisions = 0;

    for (char c : directions) {
        if (c == 'R') {
            st.push('R'); 
        } 
        else if (c == 'S') {
            while (!st.empty() && st.top() == 'R') {
                collisions += 1;
                st.pop();
            }
            st.push('S');
        }
        else if (c == 'L') {
            if (!st.empty() && st.top() == 'R') {
                collisions += 2;
                st.pop();

                while (!st.empty() && st.top() == 'R') {
                    collisions += 1;
                    st.pop();
                }

                st.push('S');
            }
            else if (!st.empty() && st.top() == 'S') {
                collisions += 1;
                st.push('S');
            }
        }
    }
    return collisions;
}