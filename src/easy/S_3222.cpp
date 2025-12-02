#include "S_3222.h"

std::string Solution::winningPlayer(int x, int y) {
    int counter = 1;
    while (x >= 1 && y >= 4) {
        x -= 1;
        y -= 4;
        counter++;
    }
    return (counter % 2 == 0) ? "Alice" : "Bob";
}
