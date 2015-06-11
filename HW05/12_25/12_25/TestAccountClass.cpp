#include "Account.h"	

int main()
{
	//Previous Code
	Account object1;

	object1.setID(1122);
	object1.setbalance(20000);
	Account::setannualInterestRate(0.045);
	object1.withdraw(2500);
	object1.deposit(3000);
	cout << "Balance is: " << object1.getbalance() << endl;
	cout << "Monthly interest is: " << object1.getMonthlyInterestrate() << "%" << endl;

	//My Code for HW05 12_25

	Account PeteTuckersAccount;

	Account::annualInterestRate = 0.015;
	PeteTuckersAccount.setbalance(1000);
	PeteTuckersAccount.setID(1122);
	PeteTuckersAccount.setName(string("George"));
	PeteTuckersAccount.deposit(30);
	PeteTuckersAccount.deposit(40);
	PeteTuckersAccount.deposit(50);
	PeteTuckersAccount.withdraw(5);
	PeteTuckersAccount.withdraw(4);
	PeteTuckersAccount.withdraw(2);
	cout << "Account Summary: " << endl;
	cout << " Name: " << PeteTuckersAccount.getName() << endl;
	cout << "Annual Interest Rate: " << PeteTuckersAccount.getannualInterestRate() << endl;
	cout << "Balance: " << PeteTuckersAccount.getbalance() << endl << endl;
	cout << "Summary of transactions: " << endl;
	PeteTuckersAccount.printTransaction();

	return 0;
}