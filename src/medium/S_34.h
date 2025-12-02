#ifndef S_34_H
#define S_34_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target);
private:
    int findFirst(vector<int>& nums, int target);
    int findLast(vector<int>& nums, int target);
};

#endif // S_34_H
