//Lab7-3.cpp - calculates the avg # of text messages sent per day
//Created by Ravi Kini on 3/25/19

#include <iostream>
#include <iomanip>

using namespace std;
int main () {
  int day = 1;
  int totalTexts = 0;
  int dailyTexts = 0;
  double average = 0.0;
  while (day < 8) {
    cout << "How many text messages did you send on day " << day << "? ";
    cin >> dailyTexts;
    totalTexts += dailyTexts;
    day ++;
  }
  average = static_cast<double>(totalTexts)/(day - 1);
  cout << fixed << setprecision(0);
  cout << endl << "You sent approximately " << average << " text messages per day" << endl;
  return 0;
}
