#include "S_380.h"

RandomizedSet::RandomizedSet() {}

bool RandomizedSet::insert(int val) {
    if (valToIndex.count(val)) return false;
    valToIndex[val] = values.size();
    values.push_back(val);
    return true;
}

bool RandomizedSet::remove(int val) {
    if (!valToIndex.count(val)) return false;
    int idx = valToIndex[val];
    int last = values.back();
    values[idx] = last;
    valToIndex[last] = idx;
    values.pop_back();
    valToIndex.erase(val);
    return true;
}

int RandomizedSet::getRandom() {
    return values[rand() % values.size()];
}
