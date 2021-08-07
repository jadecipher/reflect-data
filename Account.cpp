#include "stdafx.h"
#include "Account.h"

 bool Account::Deposit(double dollars) 
 { 
     balanceInPennies += static_cast<int>(dollars * 100);
     //complicated logic like adding transactions to log
     return true; 
 }

 bool Account::Withdraw(double dollars)
 {
     if (balanceInPennies < static_cast<int>(dollars * 100))
         return false;

     balanceInPennies -= static_cast<int>(dollars * 100);
     //complicated logic like adding transactions to log
     return true;
 }

 double Account::getBalance() const
 {
     return balanceInPennies/100;
 }
