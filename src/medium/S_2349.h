#ifndef S_2349_H
#define S_2349_H

#include <unordered_map>
#include <map>
#include <set>

class NumberContainers {
private:
    std::unordered_map<int, int> indexToNumber;
    std::map<int, std::set<int>> numberToIndices;

public:
    NumberContainers();
    void change(int index, int number);
    int find(int number);
};


#endif // !S_2349_H

