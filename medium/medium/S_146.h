#ifndef S_146_H
#define S_146_H

#include <unordered_map>
#include <list>
#include <utility>

class LRUCache {
public:
    LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);

private:
    int cap;
    std::list<std::pair<int,int>> cache; // {key, value}
    std::unordered_map<int, std::list<std::pair<int,int>>::iterator> mp;
};

#endif // S_146_H
