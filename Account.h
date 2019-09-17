#ifndef Account_Header
#include <iostream>
#include <cmath>
using namespace std;

class Account { //class header

private:
    double acctBalance_=0.0; //data member
	double interestRate_=0.0;

public:
	Account() {} //default constructor

	Account(double interestRate) {
		interestRate_=interestRate;
	}

	double checkBalance() { //getter
		return acctBalance_;
	}

	double getRate() {
		return interestRate_;
	}

	double getBalance(int year) {
		double balance = 0.0;
		balance = acctBalance_ * pow((1+interestRate_), year);
		return balance;
	}

	void addBalance(double deposit) { //setter
    	acctBalance_ += deposit;
	}

	void setBalance(double balance) { 
    	acctBalance_ = balance;
	}

	void setRate(double interestRate) {
    	interestRate_ = interestRate;
	}

};

#endif 