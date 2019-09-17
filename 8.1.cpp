//Lab8-1.cpp
//Created/revised by Kripa Kini on 4/10/19

#include <iostream>
using namespace std;

int main () {
  int maxRows = 0;
  cout << "Maximum number of rows: ";
  cin >> maxRows;
  int row = 0;
  do {
    int space = 0;
    do {
      cout << " ";
      space += 1;
    } while(space < maxRows - row);
    int asterisk = 0;
    do {
      cout << "* ";
      asterisk += 1;
    } while(asterisk < row + 1);
    row += 1;
    cout << endl;
  } while(row < maxRows - 1);
}
