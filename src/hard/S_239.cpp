#include "S_239.h"
#include <algorithm>
using namespace std;

vector<int> Solution::maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> leftMax(n);
    vector<int> rightMax(n);

    leftMax[0] = nums[0];
    rightMax[n - 1] = nums[n - 1];

    for (int i = 1; i < n; i++) {
        leftMax[i] = (i % k == 0) ? nums[i] : max(leftMax[i - 1], nums[i]);
        rightMax[n - 1 - i] = ((n - 1 - i) % k == 0) ? nums[n - 1 - i] : max(rightMax[n - i], nums[n - 1 - i]);
    }

    vector<int> output(n - k + 1);
    for (int i = 0; i < n - k + 1; i++) {
        output[i] = max(leftMax[i + k - 1], rightMax[i]);
    }

    return output;
}
