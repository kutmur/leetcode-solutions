#include "S_172.h"

int Solution::trailingZeroes(int n) {
    return n / 3125 + n / 625 + n / 125 + n / 25 + n / 5;
}
