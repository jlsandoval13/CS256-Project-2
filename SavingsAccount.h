#pragma once
#ifndef SAVINGSACOUNT_H
#definfe SAVINGSACCOUNT_H
#include "BankAccount.h"
#include <iostream>
#include "stdafx.h"
using namespace std;

class SavingsAccount : public BankAccount
{
  protected:
  bool status;
  public:
  SavingsAccount(double b, double ir, bool s) : BankAccount(b, ir), status(s) {}
  void checkStatus();
  virtual void deposit(double a);
  virtual void withdraw(double a);
  virtual void monthlyProc();
  virtual void bStatement();
};

void SavingsAccount::checkStatus()
{
  if(getBalance() < 25)
  status = false;
  else
  status = true;
}

void SavingsAccount::withdraw(double a)
{
  checkStatus();
  if(status == true && a < getBalance() )
  BankAccount::withdraw(a);
  else
  cout << "Account is inactive." << endl;
}

void SavingsAccount::monthlyProc()
{
  int w = getWithdrawals();
  if(w > 4)
  monthCharge((double)(w-4));
  checkStatus();
  SavingsAccount::bStatement();
  BankAccount::monthlyProc();
}

void SavingsAccount::bStatement()
{
  BankAccount::bStatement();
  cout << "Account status: ";
  if(status == true)
  cout << "Active" << endl;
  else
  cout << "inactive" << endl;
}

#endif
