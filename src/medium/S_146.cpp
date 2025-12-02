#include "S_146.h"

LRUCache::LRUCache(int capacity) {
    cap = capacity;
}

int LRUCache::get(int key) {
    if (mp.find(key) == mp.end())
        return -1;

    auto it = mp[key];
    int val = it->second;
    cache.erase(it);
    cache.push_front({key, val});
    mp[key] = cache.begin();
    return val;
}

void LRUCache::put(int key, int value) {
    if (mp.find(key) != mp.end()) {
        cache.erase(mp[key]);
    } else if ((int)cache.size() == cap) {
        auto last = cache.back();
        mp.erase(last.first);
        cache.pop_back();
    }
    cache.push_front({key, value});
    mp[key] = cache.begin();
}
