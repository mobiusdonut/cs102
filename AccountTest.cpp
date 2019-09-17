#include <iostream>
#include "Account.h"

using namespace std;

int main() {

	double deposit = 0;
	Account acct = Account();
	acct.setRate(0.015);
	acct.addBalance(1000);

	cout << "Current Balance: $" << acct.checkBalance() << endl;
    for (int i = 1; i <= 3; i++) {
		cout << "Year " << i << ": $" << acct.getBalance(i) << endl;
	}

	return 0;
}

// Encapsulation: A class encapsulates all of an object�s attributes and behaviors.
// Inheritance: The relationship between a superclass and an inherited class is called an �is a� relationship.
// Abstraction: An abstract class cannot be instantiated, but other classes are derived from it (information hiding).
// Polymorphism: means the ability to take many forms.  e.g. Account acct = new CheckingAccount();



