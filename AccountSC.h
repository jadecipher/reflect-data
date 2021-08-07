#pragma once
class AccountSC
{
private:
    int balanceInPennies = 0;
    /* log of transactions, owner information, and other important things*/
    int mutable serviceChargesinPennies = 0;
    /* some way of knowing if these need to be recalculated*/
public:
    bool Deposit(double dollars);
    bool Withdraw(double dollars);
    double getBalance() const;
};

