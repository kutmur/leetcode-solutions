#include "S_2169.h"

int S_2169::countOperations(int num1, int num2) {
    int counter = 0;
    while (num1 != 0 && num2 != 0) {
        if (num1 >= num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        counter++;
    }
    return counter;
}
