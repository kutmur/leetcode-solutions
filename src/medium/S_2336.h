#ifndef S_2336_H
#define S_2336_H

#include <set>

/**
 * @class SmallestInfiniteSet
 * @brief Manages a set of positive integers and allows popping the smallest and adding back numbers.
 *
 * This class simulates an infinite set of positive integers {1, 2, 3, ...}.
 * It provides operations to remove and return the smallest integer from the set,
 * and to add an integer back into the set.
 */
class SmallestInfiniteSet {
private:
    // A sorted set to store numbers that were popped and then added back.
    // The smallest element in this set is a candidate for the overall smallest number.
    std::set<int> added_back;

    // A counter representing the smallest integer in the infinite sequence {1, 2, 3, ...}
    // that has not yet been popped.
    int current;

public:
    /**
     * @brief Initializes the object to contain all positive integers.
     */
    SmallestInfiniteSet();
    
    /**
     * @brief Removes and returns the smallest integer contained in the infinite set.
     * @return The smallest integer.
     */
    int popSmallest();
    
    /**
     * @brief Adds a positive integer num back into the infinite set, if it is not already in the set.
     * @param num The integer to add back.
     */
    void addBack(int num);
};

#endif // S_2336_H