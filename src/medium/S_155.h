#ifndef S_155_H
#define S_155_H

#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> st;
    stack<int> minVal;

    MinStack();

    void push(int val);
    void pop();
    int top();
    int getMin();
};

#endif // S_155_H
