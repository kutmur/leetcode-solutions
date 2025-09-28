#include "S_976.h"

int Solution::largestPerimeter(std::vector<int>& nums) {
    // A triangle is not possible with fewer than 3 sides.
    if (nums.size() < 3) {
        return 0;
    }

    // Sort the array to easily access the largest elements.
    sort(nums.begin(), nums.end());

    // Iterate from the end of the array to check the largest potential sides first.
    // For a sorted array with sides a, b, c where a <= b <= c,
    // we only need to check if a + b > c for a valid triangle.
    for (int i = nums.size() - 3; i >= 0; i--) {
        int side1 = nums[i];
        int side2 = nums[i+1];
        int side3 = nums[i+2];

        // Check the triangle inequality theorem.
        if (side1 + side2 > side3) {
            // Since we are iterating from the largest numbers,
            // the first valid triangle we find will have the largest perimeter.
            return side1 + side2 + side3;
        }
    }

    // If the loop finishes, no valid triangle could be formed.
    return 0;
}