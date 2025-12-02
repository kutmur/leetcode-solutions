#include "S_1318.h"

int Solution::minFlips(int a, int b, int c) {
    int flipsCount = 0;

    for (int bitPosition = 0; bitPosition < 32; ++bitPosition) {
        int bitA = (a >> bitPosition) & 1;
        int bitB = (b >> bitPosition) & 1;
        int bitC = (c >> bitPosition) & 1;

        if (bitC == 0) {
            flipsCount += bitA + bitB;
        } else {
            if (bitA == 0 && bitB == 0) {
                flipsCount += 1;
            }
        }
    }

    return flipsCount;
}
