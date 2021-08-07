#include "stdafx.h"
#include "Manipulation.h"

bool Manipulation::takeMoney(double dollars)
{
    if (account)
    {
        return account->Deposit(dollars);
    }
    return false;
}

double Manipulation::confirmAssets() const
{
    if (account)
    {
        return account->getBalance();
    }
    return 0.0;
}
