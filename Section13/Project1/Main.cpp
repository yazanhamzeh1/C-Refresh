#include "Accounts.h"
#include <iostream>
using namespace std;

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

