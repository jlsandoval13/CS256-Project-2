#pragma once
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include "stdafx.h"
using namespace std;

class BankAccount
{
  protected:
  double balance;
  double interestRate;
  double serviceCharge = 0;
  int deposits = 0;
  int withdrawals = 0;
  public:
  BankAccount(double b, double ir);
  virtual void bStatement();
  virtual void deposit(double a);
  virtual void withdraw(double a);
  virtual void monthlyProc();
  void monthCharge(double a);
  double calcInt();
  double getBalance();
  int getWithdrawals();
  int getDeposits();
};

BankAccount::BankAccount(double b, double ir): balance(b), interestRate(r) {}

void BankAccount::()
{
  cout << "Monthly Bank Statement: " << endl;
  printf << "Beginning Balance: $%.2f" << balance << endl;
  cout << "Number of Deposits: " << deposits << endl;
  cout << "Number of Withdrawals: " << withdrawals << endl;
  printf << "Total monthly charges: $%.2f" << serviceCharge << endl;
}

void BankAccount::deposits(double a)
{
  balance += a;
  deposits++;
  printf << "Deposit of $" << a << " successful" << endl;
}

void BankAccount::withdraw(double a)
{
  balance += a;
  withdrawals++;
  printf << "Withdrawal of $%.2f" << a << " successful" << endl;
}

double BankAccount::calcInt()
{
  double monthly = rate / 12;
  monthly += balance;
  balance += monthly;
  return monthly;
}

void BankAccount::monthlyProc()
{
  balance -= serviceCharge;
  printf << "Monthly interest: $%.2f" << calcInt() << endl;
  printf << "Current Balance: $%.2f" << balance << endl;
  withdrawals = 0;
  deposits = 0;
  serviceCharge = 0;
}

void BankkAccount::monthCharge(double a)
{  serviceCharge += a;}

double BankAccount::getBalance()
{  return balance;}

int BankAccount::getWithdrawals()
{  return withdrawals;}

int BankAccount::getDeposits()
{  return deposits;}

#endif
