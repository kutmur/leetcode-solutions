// S_981.h
#pragma once
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class TimeMap {
public:
    TimeMap();
    void set(string key, string value, int timestamp);
    string get(string key, int timestamp);

private:
    unordered_map<string, vector<pair<int, string>>> data;
};
