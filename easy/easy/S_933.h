// S_933.h
#pragma once
#include <queue>

class RecentCounter {
public:
    std::queue<int> q;

    RecentCounter();
    int ping(int t);
};
