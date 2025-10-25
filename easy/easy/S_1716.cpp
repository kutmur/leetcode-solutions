#include "S_1716.h"

int Solution::totalMoney(int n) {
    int week = 0;
    // Calculate the number of full weeks
    int temp = n / 7; 
    int result = 0;
    // Calculate the number of remaining days
    int leftOver = n % 7;
    
    // The sum of money in the first full week (1+2+3+4+5+6+7)
    int week_money = 28; 
    
    // Loop through all the full weeks
    while(week != temp){
        // Add the sum for the current week
        result += week_money;
        // The next week's sum will be 7 more than the current one
        week_money += 7;
        week++;
    }
    
    // Calculate the starting deposit for the Monday of the last (possibly incomplete) week
    // 'week' now holds the count of full weeks passed.
    int monday_start = week + 1;
    
    // Add the deposits for the remaining days
    for(int i = 0; i < leftOver; i++){
        result += (monday_start + i);
    }

    return result;
}