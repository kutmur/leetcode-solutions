#include "S_790.h"
#include <cstring> // For memcpy

/**
 * The core logic uses a space-optimized dynamic programming approach.
 * We maintain an array `tilingWays` of size 4 to represent the states of the tiling
 * at the previous column (i-1).
 * * State Definitions:
 * tilingWays[0]: Number of ways to have a fully tiled board.
 * tilingWays[1]: Number of ways to have a board with the bottom cell of the last column empty.
 * tilingWays[2]: Number of ways to have a board with the top cell of the last column empty.
 * tilingWays[3]: Number of ways the board was fully tiled two columns ago (acts as a lag variable).
 */
int Solution::numTilings(int n) {
    // Base case: for a 2x0 board, there's 1 way (empty tiling).
    // {full, bottom_empty, top_empty, prev_full}
    long tilingWays[4] = {1, 0, 0, 0};

    for(int i = 1; i <= n; i++){
        long newTilingWays[4] = {0, 0, 0, 0};

        // Calculate ways to get a fully tiled 2xi board
        newTilingWays[0] = (tilingWays[0] + tilingWays[1] + tilingWays[2] + tilingWays[3]) % MOD;
        
        // Calculate ways to get a 2xi board with a bottom overhang
        newTilingWays[1] = (tilingWays[2] + tilingWays[3]) % MOD;
        
        // Calculate ways to get a 2xi board with a top overhang
        newTilingWays[2] = (tilingWays[1] + tilingWays[3]) % MOD;
        
        // The new "previous full" state is the old "current full" state
        newTilingWays[3] = tilingWays[0];
        
        // Copy the new states to be the current states for the next iteration
        memcpy(tilingWays, newTilingWays, sizeof(newTilingWays));
    }
    
    // The final answer is the number of ways to have a fully tiled 2xn board.
    return tilingWays[0]; 
}