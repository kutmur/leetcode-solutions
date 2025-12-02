#include "S_292.h"

bool Solution::canWinNim(int n) {
    if (n <= 3)
        return true;
    if (n % 4 == 0)
        return false;
    else
        return true;
}
