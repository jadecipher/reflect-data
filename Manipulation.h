#pragma once
#include "Account.h"

class Manipulation
{
private:
    Account* account;
public:
    Manipulation(Account* a) : account(a) {}
    bool takeMoney(double dollars);
    double confirmAssets() const;
};

