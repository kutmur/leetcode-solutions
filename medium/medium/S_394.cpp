#include "S_394.h"

string Solution::decodeString(string s) {
    stack<int> countStack;
    stack<string> stringStack;
    string current = "";
    int k = 0;

    for (char c : s) {
        if (isdigit(c)) {
            k = k * 10 + (c - '0');
        } 
        else if (c == '[') {
            countStack.push(k);
            stringStack.push(current);
            current = "";
            k = 0;
        } 
        else if (c == ']') {
            string decoded = stringStack.top(); stringStack.pop();
            int repeat = countStack.top(); countStack.pop();
            while (repeat--)
                decoded += current;
            current = decoded;
        } 
        else {
            current += c;
        }
    }
    return current;
}
