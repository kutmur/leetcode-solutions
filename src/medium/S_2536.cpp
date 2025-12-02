#include "S_2536.h"

// We use the std:: prefix explicitly since the header does not
// include 'using namespace std;'
std::vector<std::vector<int>> Solution::rangeAddQueries(int n, std::vector<std::vector<int>>& queries) {
    // Initialize the n x n result matrix with zeros
    std::vector<std::vector<int>> result(n, std::vector<int>(n, 0));

    // Iterate through each query
    for (int k = 0; k < queries.size(); k++) {
        int row1 = queries[k][0];
        int row2 = queries[k][2];
        int col1 = queries[k][1];
        int col2 = queries[k][3];
        
        // Iterate through the specified submatrix
        for (int i = row1; i <= row2; i++) {
            for (int j = col1; j <= col2; j++) {
                // Increment the value of each cell in the submatrix
                result[i][j]++;
            }
        }
    }
    
    return result;
}