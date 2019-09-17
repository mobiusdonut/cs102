#include <iostream>
#include <string>
using namespace std;
int main() {
    double salePrice;
    double taxRate;
    cout << "What is the sale price?" << endl;
    cin >> salePrice;
    cout << "What is the tax rate? (no \%)";
    cin >> taxRate;
    cout << "The final price is " << salePrice + salePrice * taxRate * 0.001 << endl;
    return 0;
}
