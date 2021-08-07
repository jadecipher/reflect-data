#pragma once
#include "Account.h"
#include "gsl/gsl.h"

class ManipulationNN
{
    private:
        gsl::not_null<Account*> account;
    public:
        ManipulationNN(gsl::not_null<Account*> a) : account(a) {}
        bool takeMoney(double dollars);
        double confirmAssets() const;
    };

