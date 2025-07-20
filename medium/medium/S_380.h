#ifndef S_380_H
#define S_380_H

#include <unordered_map>
#include <vector>
#include <cstdlib>

class RandomizedSet {
    std::unordered_map<int, int> valToIndex;
    std::vector<int> values;

public:
    RandomizedSet();

    bool insert(int val);
    bool remove(int val);
    int getRandom();
};

#endif
