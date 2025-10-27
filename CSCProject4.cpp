#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double weight, miles, rate;

    cout << "What is the weight of your package? (kg)\n";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Your package does not meet our company shipping requirements, we cannot ship this package.";
        return 0;
    }

    cout << "How far will your package be shipped? (miles)\n";
    cin >> miles;

    if (miles < 10 || miles > 3000) {
        cout << "Your package is outside our company shipping range, we cannot ship your package.";
        return 0;
    }

    if (weight <= 2) {
        rate = miles / 500 * 1.10;
    }
    else if (weight <= 6) {
        rate = miles / 500 * 2.20;
    }
    else if (weight <= 10) {
        rate = miles / 500 * 3.70;
    }
    else
        rate = miles / 500 * 4.80;

    cout << "Your package will cost " << fixed << setprecision (2) << rate;
    return 0;
}
