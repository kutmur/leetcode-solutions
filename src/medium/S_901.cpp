// S_901.cpp

#include "S_901.h"

StockSpanner::StockSpanner() {
    counter = 0;
}

int StockSpanner::next(int price) {
    while (!st.empty() && st.top().first <= price)
        st.pop();

    int span;
    if (st.empty())
        span = counter + 1;
    else
        span = counter - st.top().second;

    st.push({price, counter});
    counter++;
    return span;
}
