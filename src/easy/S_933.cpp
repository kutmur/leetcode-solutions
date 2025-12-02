// S_933.cpp
#include "S_933.h"

RecentCounter::RecentCounter() {}

int RecentCounter::ping(int t) {
    q.push(t);
    while (!q.empty() && q.front() < t - 3000)
        q.pop();
    return (int)q.size();
}
