#include "S_1812.h"

bool Solution::squareIsWhite(string coordinates) {
    // Convert column letter to 1-based index: 'a' -> 1, ..., 'h' -> 8
    int col = coordinates[0] - 'a' + 1;
    // Convert row character to integer: '1' -> 1, ..., '8' -> 8
    int row = coordinates[1] - '0';
    // Square is white if col+row is odd
    return (col + row) % 2 == 1;
}
