#include "S_2520.h"

int Solution::countDigits(int num) {
    int original = num;
    int counter = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && original % digit == 0)
            counter++;
        num /= 10;
    }
    return counter;
}
