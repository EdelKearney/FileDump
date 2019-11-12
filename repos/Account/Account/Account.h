#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	int getId() const;
	void setID(int idParam);
	double getBalance() const;
	void setBalance(double bParam);

	void deposit(double dParam);
	void withdraw(double wParam);


private:
	int id;
	double balance;
};
#endif //ACCOUNT_H