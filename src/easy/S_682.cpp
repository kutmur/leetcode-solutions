#include "S_682.h"

int S_682::calPoints(vector<string>& ops) {
    vector<int> record;
    for (string& op : ops) {
        if (op == "C") record.pop_back();
        else if (op == "D") record.push_back(2 * record.back());
        else if (op == "+") record.push_back(record[record.size() - 1] + record[record.size() - 2]);
        else record.push_back(stoi(op));
    }
    int total = 0;
    for (int score : record) total += score;
    return total;
}
