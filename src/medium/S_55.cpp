#include "S_55.h"
#include <algorithm>
using namespace std;

bool Solution::canJump(vector<int>& nums) {
    int farthest = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > farthest)
            return false;
        farthest = max(farthest, i + nums[i]);
    }
    return true;
}
