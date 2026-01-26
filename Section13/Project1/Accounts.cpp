#include "Accounts.h"
#include <iostream>


void Account::set_balance(double bal) { 
	balance = bal;
}
double Account::get_balance() {
	return balance;
}
bool Account::deposit(double amount) {
	if (amount >= 0) {
		balance += amount;
		return true;
	}
	else {
		std::cout<< "Invalid amount to deposit!\n";
		return false;
	}
}

bool Account::withdraw(double amount) {
	if (amount >= 0)
		if (balance > amount) {
			balance -= amount;
			return true;
		}
		else {
			std::cout << "Not enought money in the account\n";
			return false;
		}
	else {
		std::cout << "Invalid amount to withdraw!\n";
		return false;
	}

}