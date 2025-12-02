#include "S_224.h"
#include <stack>
#include <cctype>

using std::stack;

int Solution::calculate(string s) {
    stack<int> nums, signs;
    int result = 0;
    int sign = 1;
    int num = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (isdigit(s[i])) {
            num = s[i] - '0';
            while (i + 1 < s.size() && isdigit(s[i+1])) {
                num = num * 10 + (s[++i] - '0');
            }
            result += num * sign;
            num = 0;
        } 
        else if (s[i] == '+') {
            sign = 1;
        } 
        else if (s[i] == '-') {
            sign = -1;
        } 
        else if (s[i] == '(') {
            nums.push(result);
            signs.push(sign);
            result = 0;
            sign = 1;
        } 
        else if (s[i] == ')') {
            result = nums.top() + signs.top() * result;
            nums.pop();
            signs.pop();
        }
    }
    return result;
}
