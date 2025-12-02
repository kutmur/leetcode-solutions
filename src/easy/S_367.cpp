// S_367.cpp
#include "S_367.h"

bool Solution::isPerfectSquare(int num) {
    for (long i = static_cast<long>(num); i > 0; i--) {
        if (i * i == num)
            return true;
    }
    return false;
}
