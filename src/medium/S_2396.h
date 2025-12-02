#ifndef S_2396_H
#define S_2396_H

#include <vector>

class Solution {
public:
    bool isStrictlyPalindromic(int n);

private:
    std::vector<int> toBase(int num, int base);
    bool isPalindrom(const std::vector<int>& v);
};

#endif // S_2396_H
