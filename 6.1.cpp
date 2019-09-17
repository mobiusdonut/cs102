#include <iostream>

using namespace std;

int main()
{
    char size;
    int coupon = 0;
    bool exti = false;
    double total = 0.0;
    char coup;
    int done;
    int lar = 0;
    int med = 0;

    while (not exti) {
    cout << "Enter size of pizza (m/l): ";
    cin >> size;

    if (size == 'm') {
        total += 9.99;
        med += 1;
    }
    else if (size == 'l') {
        total += 12.99;
        coupon += 1;
        lar += 1;
    }
    cout << "You current total is " << total << endl;
    cout << "Would you like to use one of your " << coupon << " coupons? (y/n) ";
    cin >> coup;
    if (coup == 'y') {
        total -= 2.00;
        coupon -= 1;
    }
    cout << "Would you like to order another pizza? If so, type 0. If not, type -1: ";
    cin >> done;
    if (done == -1) {
        exti = true;
    }
    }
    cout << "You bought " << med << " medium pizzas and " << lar << " large pizzas at a cost of " << total << endl;

}
