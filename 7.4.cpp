//Lab7-4.cpp - calculates the avg electric bill over some months
//Created by Kripa Kini on 3/25/19

#include <iostream>
#include <iomanip>

using namespace std;
int main () {
  int month = 1;
  double totalBill = 0.0;
  double monthlyBill = 0.0;
  double average = 0.0;
  while (monthlyBill != -1) {
    cout << "What was the electric bill for month " << month << "? ";
    cin >> monthlyBill;
    if (monthlyBill == -1) {
      break;
    }
    totalBill += monthlyBill;
    month ++;
  }
  totalBill += 1;
  average = (totalBill)/(month - 1);
  cout << fixed << setprecision(2);
  cout << endl << "The average electric bill was " << average << " dollars" << endl;
  return 0;
}
