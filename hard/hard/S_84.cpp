// S_84.cpp

#include "S_84.h"
#include <vector>
#include <stack>
#include <algorithm>

int Solution_84::largestRectangleArea(std::vector<int>& heights) {
    int n = heights.size();
    heights.insert(heights.begin(), 0);
    heights.push_back(0);
    n += 2;

    std::stack<int> st;
    int maxArea = 0;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && heights[i] < heights[st.top()]) {
            int h = heights[st.top()]; st.pop();
            int w = i - st.top() - 1;
            maxArea = std::max(maxArea, h * w);
        }
        st.push(i);
    }
    return maxArea;
}
