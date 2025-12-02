#include "S_2043.h"

// Constructor implementation
Bank::Bank(vector<long long>& balance) {
    // this->balance = balance; performs a copy of the vector
    this->balance = balance; 
    this->size = this->balance.size();
}

// Helper function to check if an account number is valid
// Note: Accounts are 1-indexed
inline bool isValidAccount(int account, int size) {
    return account > 0 && account <= size;
}

bool Bank::transfer(int account1, int account2, long long money) {
    // Check if both accounts are valid and if account1 has enough money
    if (isValidAccount(account1, size) && 
        isValidAccount(account2, size) &&
        balance[account1 - 1] >= money) {
        
        // Perform the transaction
        balance[account1 - 1] -= money;
        balance[account2 - 1] += money;
        return true;
    }
    
    // Transaction failed
    return false;
}

bool Bank::deposit(int account, long long money) {
    // Check if the account is valid
    if (isValidAccount(account, size)) {
        balance[account - 1] += money;
        return true;
    }
    
    // Transaction failed
    return false;
}

bool Bank::withdraw(int account, long long money) {
    // Check if the account is valid and has sufficient funds
    if (isValidAccount(account, size) && 
        balance[account - 1] >= money) {
        
        balance[account - 1] -= money;
        return true;
    }

    // Transaction failed
    return false;
}