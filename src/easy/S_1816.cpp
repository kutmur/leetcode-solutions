#include "S_1816.h"
#include <sstream>

std::string S_1816::truncateSentence(std::string s, int k) {
    std::istringstream iss(s);
    std::string word;
    std::string result;
    int count = 0;

    // Read each word, stop once you've collected k words
    while (iss >> word) {
        if (count == 0) {
            result = word;
        } else {
            result += " " + word;
        }

        count++;
        if (count == k) {
            break;
        }
    }

    return result;
}
