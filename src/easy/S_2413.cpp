#include "S_2413.h"

int Solution::smallestEvenMultiple(int n) {
    if(n % 2 == 0)
        return n;
    else    
        return n * 2;
}
