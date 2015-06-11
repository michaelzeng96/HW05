#include "Transaction.h"

Transaction::Transaction(Date date, char type, double amount, double balance, string description)
{
	this->date = date;
	this->type = type;
	this->amount = amount;
	this->balance = balance;
	this->description = description;
}

Date Transaction::getDate(void)
{
	return date;
}

char Transaction::getType(void)
{
	return type;
}

double Transaction::getAmount(void)
{
	return amount;
}
double Transaction::getBalance(void)
{
	return balance;
}
string Transaction::getDescription(void)
{
	return description;
}
void Transaction::setDate(Date sDate)
{
	date = sDate;
}
void Transaction::setType(char cType)
{
	type = cType;
}
void Transaction::setAmount(double dAmount)
{
	amount = dAmount;
}
void Transaction::setBalance(double dBalance)
{
	balance = dBalance;
}
void Transaction::setDescription(string sDescription)
{
	description = sDescription;
}