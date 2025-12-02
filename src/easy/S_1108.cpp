#include "S_1108.h"

std::string Solution::defangIPaddr(std::string address) {
    std::string result = "";
    for (char c : address) {
        if (c == '.')
            result += "[.]";
        else
            result += c;
    }
    return result;
}
