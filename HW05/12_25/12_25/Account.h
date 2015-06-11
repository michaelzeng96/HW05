#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>
#include "Transaction.h"
#include <vector>
using namespace std;

class Account
{
public:
	static double annualInterestRate;
	Account();
	Account(string specified_name, int specified_ID, double specified_balance);
	int getID(void);
	void setID(int set);
	double getbalance(void);
	void setbalance(double set);
	static double getannualInterestRate(void);
	static void setannualInterestRate(double set);
	double getMonthlyInterestrate(void);
	void withdraw(double amount);
	void deposit(double amount);
	string getName(void);
	void setName(string sName);
	void printTransaction(void);

private:
	vector<Transaction> transactions;
	int ID;
	double balance;
	string name;
	
};

#endif