#ifndef _ACCOUNTS_H_
#define _ACCOUNTS_H_
class Account {
private:
	double balance;
public:
	void set_balance(double); 
	double get_balance(); 
	bool deposit(double);
	bool withdraw(double);
};

#endif

