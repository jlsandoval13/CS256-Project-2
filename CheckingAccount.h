#pragma once
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "BankAccount.h"
#include <iostream>
#include "stdafx.h"
using namespace std;

class CheckingAccount : public BankAccount
{
  public:
  Checking(double b, double ir) : BankAccount(b,ir) {}
  virtual void withdraw(double a);
  virtual void monthlyProc();
};

void CheckingAccount::withdraw(double a)
{
  if(getBalance() - a < 0)
  {
    monthCharge(15);
    cout << "Account balance below amoount requested. Overdraw fee of $15 added to monthly charge." << endl;
  }
  else
  BankAccount::withdraw(a);
}

void CheckingAccount::monthlyProc()
{
  monthCharge(5 + (0.1 * getWithdrawals() ));
  BankAccount::bStatement();
  BankAccount::monthlyProc();
}
#endif
