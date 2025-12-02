#include "S_1732.h"

int Solution::largestAltitude(vector<int>& gain) {
    int altitude = 0;
    int result = 0;
    for (int i = 0; i < gain.size(); ++i) {
        altitude += gain[i];
        result = max(result, altitude);
    }
    return result;
}
