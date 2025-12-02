#include "S_20.h"

bool Solution::isValid(std::string s) {
    while (true) {
        size_t pos = std::string::npos;
        if ((pos = s.find("()")) != std::string::npos) {
            s.erase(pos, 2);
            continue;
        }
        if ((pos = s.find("{}")) != std::string::npos) {
            s.erase(pos, 2);
            continue;
        }
        if ((pos = s.find("[]")) != std::string::npos) {
            s.erase(pos, 2);
            continue;
        }
        break;
    }
    return s.empty();
}
