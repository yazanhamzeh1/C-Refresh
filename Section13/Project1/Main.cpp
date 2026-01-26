#include <iostream>
using namespace std;

class Account {
private:
	double balance;
public:
	void set_balance(double bal) { //method defined inside its class
		balance = bal;
	}
	double get_balance() {
		return balance;
	}
	bool deposit(double );//methods declared inside the class but defined outside of it
	bool withdraw(double );
};
bool Account::deposit(double amount) {
	if (amount >= 0) {
		balance += amount;
		return true;
	}
	else {
		cout << "Invalid amount to deposit!\n";
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
			cout << "Not enought money in the account\n";
			return false;
		}
	else {
		cout << "Invalid amount to withdraw!\n";
		return false;
	}
		
}
int main(void) {
	float balance = 0;
	bool a_Okay;
	Account Mike;
	Mike.set_balance(3000);
	balance = Mike.get_balance();
	cout << "Balance = $" << balance<<endl;
	a_Okay = Mike.deposit(-200);
	cout << a_Okay << endl;
	a_Okay = Mike.deposit(12);
	cout <<"New Balance = $"<< Mike.get_balance()<<endl;
	a_Okay = Mike.withdraw(4000);
	a_Okay = Mike.withdraw(400);
	cout << "New Balance = $" << Mike.get_balance() << endl;

	return 0;
}

