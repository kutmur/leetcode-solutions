#include "S_3232.h"

bool Solution::canAliceWin(std::vector<int>& nums) {
    int countAlice = 0, countBob = 0;
    for (int num : nums) {
        if (num >= 10)
            countBob += num;
        else
            countAlice += num;
    }
    return countAlice != countBob;
}
