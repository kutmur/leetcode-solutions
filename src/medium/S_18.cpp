#include "S_18.h"
#include <set>
#include <algorithm>

// Using declarations for brevity in the implementation
using std::vector;
using std::set;
using std::sort;

vector<vector<int>> Solution::fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> uniqueRes;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                // Use long long to prevent overflow during summation
                long long sum3 = (long long)nums[i] + nums[j] + nums[k];
                long long missing = (long long)target - sum3;

                // Fourth loop to find the 'missing' element
                for (int m = 0; m < n; m++) {
                    // Check that the index 'm' is distinct from i, j, and k
                    if (m != i && m != j && m != k && nums[m] == missing) {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)missing};
                        sort(temp.begin(), temp.end());
                        uniqueRes.insert(temp);
                        
                        // Found a match for this (i, j, k) triplet,
                        // so we can break the 'm' loop and move to the next triplet.
                        break; 
                    }
                }
            }
        }
    }

    // Convert the set of vectors to a vector of vectors for the return value
    return vector<vector<int>>(uniqueRes.begin(), uniqueRes.end());
}