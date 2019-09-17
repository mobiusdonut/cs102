#include <iostream> 
#include <string> 
using namespace std;
int main() {
double price = 0.50;
int donuts;
int muffins;
cout << "Number of donuts: " << endl;
cin >> donuts;
cout << "Number of muffins: " << endl;
cin >> muffins;
cout << "Total number of items: " << donuts + muffins << endl;
cout.precision(2);
cout << "Total cost: " << price * (donuts + muffins) << endl;
return 0;
}