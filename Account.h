#pragma once
class Account
{
private:
    int balanceInPennies=0;
    /* log of transactions, owner information, and other important things*/
public:
    bool Deposit(double dollars);
    bool Withdraw(double dollars);
    double getBalance() const;
};

