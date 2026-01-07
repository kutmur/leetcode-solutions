#include "S_2437.h"

using std::string;

int Solution::countTime(string time) {
    int hourCount = 0;
    int minuteCount = 0;

    // Brute-force check all possible hours (00 to 23)
    for (int hour = 0; hour < 24; hour++) {
        int h1 = hour / 10; // First digit of hour
        int h2 = hour % 10; // Second digit of hour

        // Check if the current hour matches the pattern provided in time[0] and time[1]
        // If time[i] is '?', it matches any digit; otherwise, it must match exactly.
        if ((time[0] == '?' || time[0] - '0' == h1) &&
            (time[1] == '?' || time[1] - '0' == h2)) {
            hourCount++;
        }
    }

    // Brute-force check all possible minutes (00 to 59)
    for (int minute = 0; minute < 60; minute++) {
        int m1 = minute / 10; // First digit of minute
        int m2 = minute % 10; // Second digit of minute

        // Check if the current minute matches the pattern provided in time[3] and time[4]
        if ((time[3] == '?' || time[3] - '0' == m1) &&
            (time[4] == '?' || time[4] - '0' == m2)) {
            minuteCount++;
        }
    }

    // The total combinations is the product of valid hours and valid minutes
    return hourCount * minuteCount;
}