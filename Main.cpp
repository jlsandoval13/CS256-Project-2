#include "stdafx.h"
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  SavingsAccount S(0.0,0.1,false);
  CheckingAccount C(0.0,0.012);
  int ui;
  cout << "\bBank Account\n" << "\n" << endl;
  do{
    cout << "Would you like to access your Savings Account or Checking Account?" << endl;
    cout << "\nSelect your response between 1 and 2, 1 being for Savings and 2 being for Checking: " << endl;
    cin >> ui;
    if( ui == 1)
    {
      cout << "Savings Account has been selected." << endl;
      do {
        cout << "Please select an option: (Responses must be within 1 - 4)\n" << endl;
        cout << "1. Deposit\n2. Withdraw\n3. Transaction History\n4. Print Data" << endl;
        cin >> ui;
        switch(ui)  {
          case 1:
          double d;
          cout << "\nAmount deposited: $";
          cin >> d;
          S.SavingsAccount::deposit();
          break;
          case 2:
          double w;
          cout << "\nAmount withdrawn: $";
          cin > w;
          S.SavingsAccount::withdraw();
          break;
          case 3:
          cout << "\nYour History"
          S.SavingsAccount::bStatement();
          break;
          case 4:
          break;  }
          default:
          cout << "Invalid input" << endl;
      } while (ui != 4);
      S.SavingsAccount::monthProc();
    }
    else if( ui == 2)
    {
      cout << "Checking Account has been selected." << endl;
      do {
        cout << "Please select an option: (Responses must be within 1 - 4)\n" << endl;
        cout << "1. Deposit\n2. Withdraw\n3. Transaction History\n4. Print Data" << endl;
        cin >> ui;
        switch(ui)  {
          case 1:
          double d;
          cout << "\nAmount deposited: $";
          cin >> d;
          C.SavingsAccount::deposit();
          break;
          case 2:
          double w;
          cout << "\nAmount withdrawn: $";
          cin > w;
          C.SavingsAccount::withdraw();
          break;
          case 3:
          cout << "\nYour History"
          C.SavingsAccount::bStatement();
          break;
          case 4:
          break;  }
          default:
          cout << "Invalid input" << endl;
      } while (ui != 4);
            C.SavingsAccount::monthProc();
    }
    else  {
      cout << "That is an invalid response. PLease quit and try again" << endl;
      return 0;  }
  }
  return 0;
}
