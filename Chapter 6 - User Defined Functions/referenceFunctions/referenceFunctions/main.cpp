// ReferenceFunctions.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/**
Withdraws the amount from the given balance, or withdraws
a penalty if the balance is insufficient.

Inputs:
	balance: (by REFERENCE) the balance from which to make the withdrawal
	amount:  amount to withdraw

Returns:
	balance (by REFERENCE)

Assumptions/Limitations:
	None
*/
void withdraw(double& balance, double amount)
{
    const double PENALTY = 10;
    if (balance >= amount)
    {
        balance = balance - amount;
    }
    else
    {
        cout << "Overdrawn - Penalty assessed..." << endl;
        balance = balance - PENALTY;
    }
}

/**
prints out the balance of an account.

Inputs:
	acctName: account name to be displayed
	balance:  balance of the account

Returns:
	None

Assumptions/Limitations:
	None
**/
void printBalance(string acctName, double balance)
{
    cout << "Current account balance for " << acctName << " is: $" << fixed << setprecision(2) << balance << endl << endl;
}

/**
Adds some money to the account.

Inputs:
	balance: the current balance of the account 
	amount:  amount to withdraw

Returns:
	the 'new' balance is returned.

Assumptions/Limitations:
	None
*/
double addCash(double balance, double amount)
{
    return balance + amount;
}

/**
Adds an interest amount to the account.

Inputs:
	balance:  (by REFERENCE) the balance from which to make the withdrawal
	interest: interest amount to apply

Outputs:
	balance:  (by REFERENCE) the new balance of the account after interest is applied

Assumptions/Limitations:
	None
*/
void addInterest(double& balance, double interest)
{
    double addition = interest * balance;
    balance += addition;
}

/**
Transfers an amount from one account to another.

Inputs:
	account1: (by REFERENCE) the account to take the money from
	account2: (by REFERENCE) the account to move the money to
	amount:   the amount of cash to move

Outputs:
	account1:  (by REFERENCE) the new balance of the account after the money is moved
	account2:  (by REFERENCE) the new balance of the account after the money is moved

Assumptions/Limitations:
	[] Negative 'amounts' are not prevented.
	[] Does not check to ensure that account to transfer the money from has sufficient funds.
*/
void transferMoney(double& account1, double& account2, double amount)
{
    account1 -= amount;
    account2 += amount;
}

int main()
{

    double harrys_account = 1000;
    double sallys_account = 500;
    cout << "Initial balances: " << endl << "Harry's account: " << harrys_account << endl;
    cout << "Sally's account: " << harrys_account << endl;
    //
    // take some money out
    //
    cout << "taking some money ($100) from Harry's account (Note this function uses pass by reference)" << endl;
    withdraw(harrys_account, 100);
    // Now harrys_account is 900
    printBalance("Harry's account", harrys_account);

    cout << "Oops trying to take more money than is in Harry's account ($1000).  Charging a fee..." << endl;
    // Now harrys_account is 890
    withdraw(harrys_account, 1000); // Insufficient funds
    printBalance("Harry's account", harrys_account);
    cout << "take $150 out of Sally's account" << endl;
    withdraw(sallys_account, 150);
    printBalance( "Sally's account", sallys_account);
    //
    // add cash to Harry's account
    //
    cout << "Give Harry $50000 (Note this function uses pass by value)..." << endl;
    harrys_account = addCash(harrys_account, 50000);
    printBalance("Harry's account", harrys_account);
    cout << "The bank gave Harry an Interest payment (Note this function uses pass by Reference)" << endl;
    addInterest(harrys_account, .05);
    printBalance("Harry's account", harrys_account);
    //
    // now transfer some funds...
    //
    cout << "move some money from Harry's account to Sally's account (Note this function uses pass by Reference)..." << endl << endl;
    transferMoney(harrys_account, sallys_account, 25000);
    printBalance("Harry's account", harrys_account);
    printBalance( "Sally's account", sallys_account);

    return 0;
}
