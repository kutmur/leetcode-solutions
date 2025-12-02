#include "S_509.h"
#include <vector>

int Solution::fib(int n) {
    std::vector<int> temp = {0, 1, 1, 2};
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;

    int loop = n - 4 + 1;
    while (loop-- > 0) {
        int size = temp.size();
        temp.push_back(temp[size - 1] + temp[size - 2]);
    }

    return temp.back();
}
