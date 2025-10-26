#ifndef S_2043_H
#define S_2043_H

#include <vector>

// Use std::vector
using std::vector;

class Bank {
public:
    // Member variables
    vector<long long> balance;
    int size = 0;

    /**
     * @brief Initializes the bank with a list of initial account balances.
     * @param balance A vector where the i-th element is the initial balance of the (i+1)-th account.
     */
    Bank(vector<long long>& balance);
    
    /**
     * @brief Transfers money from one account to another.
     * @param account1 The 1-based index of the source account.
     * @param account2 The 1-based index of the destination account.
     * @param money The amount of money to transfer.
     * @return True if the transaction is successful, false otherwise.
     */
    bool transfer(int account1, int account2, long long money);
    
    /**
     * @brief Deposits money into an account.
     * @param account The 1-based index of the account.
     * @param money The amount of money to deposit.
     * @return True if the transaction is successful, false otherwise.
     */
    bool deposit(int account, long long money);
    
    /**
     * @brief Withdraws money from an account.
     * @param account The 1-based index of the account.
     * @param money The amount of money to withdraw.
     * @return True if the transaction is successful, false otherwise.
     */
    bool withdraw(int account, long long money);
};

#endif // S_2043_H