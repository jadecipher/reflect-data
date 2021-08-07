#include "stdafx.h"
#include "ManipulationNN.h"

bool ManipulationNN::takeMoney(double dollars)
{
    return account->Deposit(dollars);
}

double ManipulationNN::confirmAssets() const
{
    return account->getBalance();
}
