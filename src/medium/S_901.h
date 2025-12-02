// S_901.h

#include <stack>
#include <utility>

class StockSpanner {
public:
    std::stack<std::pair<int, int>> st;
    int counter;

    StockSpanner();
    int next(int price);
};
