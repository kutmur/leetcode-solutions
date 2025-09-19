#include "S_435.h"

/**
 * The problem is to find the minimum number of intervals to remove so that the remaining
 * intervals do not overlap. This is equivalent to finding the maximum number of
 * non-overlapping intervals we can keep.
 *
 * The approach is a greedy one:
 * 1. Sort the intervals based on their end times in ascending order.
 * 2. The reason for sorting by end time is that we want to "free up" the timeline as
 *    early as possible. The interval that finishes earliest leaves the most room for
 *    subsequent intervals.
 * 3. Initialize a count of non-overlapping intervals we keep (`kept_count`) to 1,
 *    as we will always keep the first interval (the one with the earliest end time).
 * 4. Keep track of the end time of the last interval we kept (`last_end`). Initially,
 *    this is the end time of the first interval.
 * 5. Iterate through the rest of the sorted intervals. For each interval, check if
 *    its start time is greater than or equal to `last_end`.
 *    - If it is, this interval does not overlap with the last one we kept. So, we
 *      can keep it. We increment `kept_count` and update `last_end` to the current
 *      interval's end time.
 *    - If it overlaps, we must discard it. By our sorting strategy, the one we already
 *      kept (with `last_end`) finishes earlier, so it's always the better choice to
 *      keep. We do nothing and move on.
 * 6. The final answer is the total number of intervals minus the maximum number we could keep.
 */
int Solution::eraseOverlapIntervals(std::vector<std::vector<int>>& intervals) {
    // If the list is empty, no removals are needed.
    if (intervals.empty()) {
        return 0;
    }

    // Sort intervals based on their end points.
    // This greedy choice ensures we always pick the interval that finishes earliest,
    // maximizing the remaining time for other intervals.
    std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] < b[1];
    });

    int n = intervals.size();
    
    // We always keep the first interval after sorting.
    int kept_count = 1;
    
    // The end time of the last interval we decided to keep.
    int last_end = intervals[0][1];

    // Iterate from the second interval.
    for (int i = 1; i < n; ++i) {
        int current_start = intervals[i][0];

        // If the current interval does not overlap with the last kept interval...
        if (current_start >= last_end) {
            // ...we can keep this one as well.
            kept_count++;
            // Update the end time to the end of the current interval.
            last_end = intervals[i][1];
        }
        // Otherwise, the current interval overlaps. We discard it by not incrementing
        // kept_count and not updating last_end.
    }

    // The number of intervals to remove is the total minus the max we can keep.
    return n - kept_count;
}