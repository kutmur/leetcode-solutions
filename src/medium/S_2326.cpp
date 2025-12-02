#include "S_2326.h"

using namespace std;

vector<vector<int>> Solution::spiralMatrix(int m, int n, ListNode* head) {
    // Initialize the matrix with -1 as required by the problem statement
    vector<vector<int>> result(m, vector<int>(n, -1));
    
    // Define the boundaries of the spiral
    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    // Traverse the matrix in a spiral order while the list has nodes
    while (head != nullptr) {
        
        // 1. Traverse from Left to Right along the Top boundary
        for (int i = left; i <= right && head != nullptr; i++) {
            result[top][i] = head->val;
            head = head->next;
        }
        top++; // Shrink top boundary

        // 2. Traverse from Top to Bottom along the Right boundary
        for (int i = top; i <= bottom && head != nullptr; i++) {
            result[i][right] = head->val;
            head = head->next;
        }
        right--; // Shrink right boundary

        // 3. Traverse from Right to Left along the Bottom boundary
        for (int i = right; i >= left && head != nullptr; i--) {
            result[bottom][i] = head->val;
            head = head->next;
        }
        bottom--; // Shrink bottom boundary

        // 4. Traverse from Bottom to Top along the Left boundary
        for (int i = bottom; i >= top && head != nullptr; i--) {
            result[i][left] = head->val;
            head = head->next;
        }
        left++; // Shrink left boundary
    }
    
    return result;
}