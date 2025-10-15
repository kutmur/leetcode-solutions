#ifndef S_790_H
#define S_790_H

class Solution {
public:
    /**
     * @brief Calculates the number of ways to tile a 2xN board with dominos and trominos.
     * * This function uses a dynamic programming approach with state compression to find the
     * total number of unique tilings.
     * * @param n The width of the board.
     * @return The number of ways to tile the 2xN board, modulo 1e9 + 7.
     */
    int numTilings(int n);

private:
    static const int MOD = 1e9 + 7;
};

#endif // S_790_H