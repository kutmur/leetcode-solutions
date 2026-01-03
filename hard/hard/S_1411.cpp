#include "S_1411.h"

int Solution::numOfWays(int n) {
    const long long MOD = 1'000'000'007;

    // State definitions for a single row (3 cells):
    // ABA: Pattern where 1st and 3rd cells have the same color (e.g., Red-Green-Red). Uses 2 colors.
    // ABC: Pattern where all 3 cells have different colors (e.g., Red-Green-Blue). Uses 3 colors.
    
    // Base Case for n = 1:
    // ABA: 3 choices for 1st, 2 for 2nd, 1 for 3rd (must match 1st) => 3 * 2 * 1 = 6
    // ABC: 3 choices for 1st, 2 for 2nd, 1 for 3rd (must differ)    => 3 * 2 * 1 = 6
    long long aba = 6;
    long long abc = 6;

    // Dynamic Programming with Space Optimization
    for(int i = 2; i <= n; i++){
        // Transition Logic:
        // If prev row was ABA:
        //   - Next row can be ABA: 3 ways (e.g., RGR -> GRG, BRB, BGB)
        //   - Next row can be ABC: 2 ways (e.g., RGR -> GRB, GBR)
        // If prev row was ABC:
        //   - Next row can be ABA: 2 ways (e.g., RGB -> GBR, BGR is wrong example, actually logic is symmetric)
        //     Correct: RGB -> BRG, BGR (2 patterns of ABA)
        //   - Next row can be ABC: 2 ways (e.g., RGB -> BCR, BRC)
        
        long long newAba = (3 * aba + 2 * abc) % MOD;
        long long newAbc = (2 * aba + 2 * abc) % MOD;
        
        aba = newAba;
        abc = newAbc;
    }

    return (aba + abc) % MOD;
}