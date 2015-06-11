#ifndef TRANSACTION_H
#define TRACSACTION_H
#include"Date.h"
#include <string>


class Transaction
{
public:
	Transaction(Date date, char type, double amount, double balance, string description);
	Date getDate(void);
	char getType(void);
	double getAmount(void);
	double getBalance(void);
	string getDescription(void);
	void setDate(Date sDate);
	void setType(char cType);
	void setAmount(double dAmount);
	void setBalance(double dBalance);
	void setDescription(string sDescription);

private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;
	
};

#endif