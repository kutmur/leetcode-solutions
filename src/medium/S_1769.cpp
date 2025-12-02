#include "S_1769.h"

std::vector<int> Solution::minOperations(std::string boxes) {
    int n = boxes.size();
    std::vector<int> res(n);

    // Left-to-right pass
    int moves = 0, balls = 0;
    for (int i = 0; i < n; ++i) {
        res[i] += moves;
        balls += boxes[i] - '0';  // Convert '1' to 1, '0' to 0
        moves += balls;
    }

    // Right-to-left pass
    moves = balls = 0;
    for (int i = n - 1; i >= 0; --i) {
        res[i] += moves;
        balls += boxes[i] - '0';
        moves += balls;
    }

    return res;
}
