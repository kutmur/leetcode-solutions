#include "S_507.h"

bool Solution::checkPerfectNumber(int num) {
    // According to the problem constraints and definition, a perfect number must be positive.
    // If num <= 1, the loop logic correctly handles this, as the sum of divisors will be 0.
    int temp = num;
    int result = 0;
    temp--; // Start checking from the number just below num.
    
    // Iterate from num-1 down to 1 to find all proper divisors.
    while(temp > 0){
        if(num % temp == 0){
            result += temp; // If temp is a divisor, add it to the sum.
        }
        temp--;
    }
    
    // A number is perfect if it is equal to the sum of its proper divisors.
    return result == num;
}