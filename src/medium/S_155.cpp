#include "S_155.h"

MinStack::MinStack() {}

void MinStack::push(int val) {
    st.push(val);
    if (minVal.empty() || val <= minVal.top())
        minVal.push(val);
}

void MinStack::pop() {
    if (st.top() == minVal.top())
        minVal.pop();
    st.pop();
}

int MinStack::top() {
    return st.top();
}

int MinStack::getMin() {
    return minVal.top();
}
