#include "stdafx.h"
#include "AccountSC.h"


bool AccountSC::Deposit(double dollars)
{
    balanceInPennies += static_cast<int>(dollars * 100);
    //complicated logic like adding transactions to log
    return true;
}

bool AccountSC::Withdraw(double dollars)
{
    if (balanceInPennies < static_cast<int>(dollars * 100))
        return false;

    balanceInPennies -= static_cast<int>(dollars * 100);
    //complicated logic like adding transactions to log
    return true;
}

double AccountSC::getBalance() const
{
    serviceChargesinPennies = 700; //actually a more complicated calculation and some cache validity checking
    return (balanceInPennies-serviceChargesinPennies) / 100;
}
