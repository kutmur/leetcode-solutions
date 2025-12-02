#ifndef S_1352_H
#define S_1352_H

#include <vector>
using namespace std;

class ProductOfNumbers {
public:
    ProductOfNumbers();
    void add(int num);
    int getProduct(int k);
private:
    vector<int> v;
};

#endif // S_1352_H
