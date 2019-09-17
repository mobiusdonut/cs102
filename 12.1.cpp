#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main() {
  time_t t = time(0);
  tm* now = localtime(&t);
  cout << now->tm_year + 1900;
  cout << " calendar\n" << endl;
  tm time_in = { 0, 0, 0, 1, 0, now->tm_year};
  mktime(&time_in);
  int st = time_in.tm_wday;
  
  string months[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
  int yearly[12][2] = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};

  int days = st;
  for(int i = 0; i < 12; i++) {
    cout << months[i] << endl;
    for (int j = 0; j < days % 7; j++) {
      cout << "\t";
    }
    for (int k = 1; k <= yearly[i][1]; k++) {
      cout << k;
      if ((days + k) % 7 == 0) {
        cout << endl;
      }
      else{
        cout << "\t";
      }
    }
    days += yearly[i][1];
    cout << endl << endl;
  }
}
