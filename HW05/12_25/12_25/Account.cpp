#include "Account.h"

double Account::annualInterestRate = 0.0;

Account::Account()
{
	ID = 0;
	balance = 0;
}

Account::Account(string specified_name, int specified_ID, double specified_balance)
{
	name = specified_name;
	ID = specified_ID;
	balance = specified_balance;
}

int Account::getID(void)
{
	return ID;
}

void Account::setID(int set)
{
	ID = set;
}

double Account::getbalance(void)
{
	return balance;
}

void Account::setbalance(double set)
{
	balance = set;
}

double Account::getannualInterestRate(void)
{
	return annualInterestRate;
}

void Account::setannualInterestRate(double set)
{
	annualInterestRate = set;
}

double Account::getMonthlyInterestrate(void)
{
	return (annualInterestRate / 12);
}

void Account::withdraw(double amount)
{
	balance = balance - amount;
	transactions.push_back(Transaction(Date(), 'W', amount, balance, string("Withdrawal")));
}

void Account::deposit(double amount)
{
	balance = balance + amount;
	transactions.push_back(Transaction(Date(), 'D', amount, balance, string("deposit")));
}

string Account::getName(void)
{
	return name;
}
void Account::setName(string sName)
{
	name = sName;
}
void Account::printTransaction(void)
{
	for (unsigned int i = 0; i < transactions.size(); i++)
	{
		cout << "On " << transactions[i].getDate().getmonth() << "/" << transactions[i].getDate().getday() << "/"<<
			transactions[i].getDate().getyear()<<
			 ", " << transactions[i].getDescription() <<
			" $"<<transactions[i].getAmount()<<". The balance is now "<<transactions[i].getBalance()<< endl;
	}
}