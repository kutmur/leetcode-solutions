#include "Solution.h"

// Includes for the implementation
#include <vector>
#include <algorithm> // For min() and min_element()

// Use namespace std to match the user's provided code style
using namespace std;

int Solution::minimumTotal(vector<vector<int>>& triangle) {
    // Start from the second row (index 1)
    for(int i=1;i<triangle.size();i++){
        // Iterate through each element in the current row
       for(int j=0;j<triangle[i].size();j++){
            if(j==0){
                 // Leftmost element: can only come from (i-1, j)
                 triangle[i][j]=triangle[i][j]+triangle[i-1][j];
            }
            else if(j==triangle[i].size()-1){
                // Rightmost element: can only come from (i-1, j-1)
                triangle[i][j]=triangle[i][j]+triangle[i-1][j-1];
            }
            else{
                 // Middle element: can come from (i-1, j-1) or (i-1, j)
                 triangle[i][j]=triangle[i][j]+min(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }
     }
    
    // The last row now contains all minimum path sums
    int sz=triangle.size()-1;
    // Find the minimum element in the last row
    int ans= *min_element(triangle[sz].begin(),triangle[sz].end());
    return ans;
}