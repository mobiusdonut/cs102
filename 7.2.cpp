#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double sales_amt;
    const double GROWTH_RATE = 0.055;
    const double GOAL = 150000;
    int year = 0;

    cout << endl;
    cout << "Enter current annual sales amount: ";
    cin >> sales_amt;

    while (sales_amt < GOAL) {
        sales_amt *= (1 + GROWTH_RATE);
        year += 1;
    }

    cout << year << " years taken to reach " << sales_amt << " in sales" << endl;
    cout << endl;
    return 0;
}
