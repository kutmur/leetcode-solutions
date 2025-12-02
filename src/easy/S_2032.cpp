#include "S_2032.h"
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> Solution::twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    unordered_map<int, int> freq;

    auto countUnique = [&](vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums)
            if (seen.insert(num).second)
                freq[num]++;
    };

    countUnique(nums1);
    countUnique(nums2);
    countUnique(nums3);

    vector<int> result;
    for (auto& [num, count] : freq)
        if (count >= 2)
            result.push_back(num);

    return result;
}
