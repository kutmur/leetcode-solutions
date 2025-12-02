/* S_2125.h */

#ifndef S_2125_H
#define S_2125_H

#include <vector>
#include <string>

class Solution {
public:
    /**
     * @brief Calculates the total number of laser beams in a bank.
     * * A laser beam is formed between two security devices in different rows
     * if and only if there are no security devices in the rows between them.
     * * @param bank A vector of strings representing the bank layout. 
     * '1' is a security device, '0' is empty space.
     * @return The total number of laser beams.
     */
    int numberOfBeams(std::vector<std::string>& bank);
};

#endif // S_2125_H