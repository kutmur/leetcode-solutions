#include "S_2336.h"

/**
 * @brief Initializes the object.
 * The `current` counter starts at 1, representing the first integer in the infinite set.
 * The `added_back` set is initially empty.
 */
SmallestInfiniteSet::SmallestInfiniteSet() {
    current = 1;
}

/**
 * @brief Removes and returns the smallest integer from the set.
 *
 * It first checks the `added_back` set. If it's not empty, the smallest element
 * in the entire system must be the smallest one in this set.
 * If `added_back` is empty, the smallest element is the next integer from the
 * natural sequence, tracked by `current`.
 *
 * @return The smallest integer in the set.
 */
int SmallestInfiniteSet::popSmallest() {
    // If there are numbers that were added back, the smallest of them
    // is the first candidate for the overall smallest number.
    if (!added_back.empty()) {
        int smallest = *added_back.begin();
        added_back.erase(added_back.begin());
        return smallest;
    }
    
    // If no numbers were added back, the smallest is the next in the sequence.
    // Return the current number and advance the counter.
    return current++;
}

/**
 * @brief Adds an integer `num` back into the set.
 *
 * A number is only added if it's smaller than the current sequence counter `current`.
 * If `num >= current`, it implies `num` has not been popped from the main sequence yet,
 * so it's considered to be already in the set.
 * `std::set` automatically handles cases where `num` is already in `added_back`.
 *
 * @param num The integer to add back.
 */
void SmallestInfiniteSet::addBack(int num) {
    if (num < current) {
        added_back.insert(num);
    }
}