#include "S_443.h"
#include <string>

int Solution::compress(vector<char>& chars) {
    int write = 0, i = 0;
    while (i < chars.size()) {
        char current = chars[i];
        int count = 0;

        while (i < chars.size() && chars[i] == current) {
            i++;
            count++;
        }

        chars[write++] = current;

        if (count > 1) {
            string countStr = to_string(count);
            for (char c : countStr)
                chars[write++] = c;
        }
    }

    return write;
}
