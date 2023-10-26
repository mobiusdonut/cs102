//Savings.cpp
//Created by Ravi Kini on 4/26/19

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getSavingsBalance(int amount, double rate, int y) {
  double balance = 0.0;
  balance = amount * pow((1 + rate), y);
  return balance;
}
double getCheckingBalance(int amount, double rate, int y) {
  double balance = 0.0;
  balance = amount * pow((1 + rate), y);
  return balance;
}
void displayBalance(int year, double checkingBalance, double savingBalance) {
    cout << "Year " << year << endl;
    cout << "Checking: $" << checkingBalance << endl;
    cout << "Savings: $" << savingBalance << endl;
}

int main() {
  int sDeposit = 0;
  int cDeposit = 0;
  double sinterestRate = 0.0;
  double cinterestRate = 0.0;
  double sacctBalance = 0.0;
  double cacctBalance = 0.0;

  cout << "Savings Deposit: ";
  cin >> sDeposit;
  cout << "Checking Deposit: ";
  cin >> cDeposit;
  cout << "Rate for Savings Account (in decimal form): ";
  cin >> sinterestRate;
  cout << "Rate for Checking Account (in decimal form): ";
  cin >> cinterestRate;

  cout << fixed << setprecision(2);
  for(int year = 1; year < 4; year ++) {
    cacctBalance = getCheckingBalance(cDeposit, cinterestRate, year);
    sacctBalance = getSavingsBalance(sDeposit, sinterestRate, year);
    displayBalance(year, sacctBalance, cacctBalance);
  }
  return 0;
}
