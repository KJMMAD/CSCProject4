#include <iostream>
using namespace std;
int main()
{
    bool leap;
    int month, year, day;

    cout << "Enter a month (1-12) ";
    cin >> month;
    cout << "\nEnter a year ";
    cin >> year;

    if (year % 100 == 0) {
        if (year % 400 == 0) {
            leap = true;
        }
        else
            leap = false;
    }
    else if (year % 4 == 0) {
        leap = true;
    }
    else {
        leap = false;
    }
    int days;

    if (month == 2) {
        if (leap == true)
            days = 29;
        else
            days = 28;
    }
    else if (month <= 7){
        if (month % 2 == 1) {
            days = 31;
        }
        else
            days = 30;
    }
    else {
        if (month % 2 == 1) {
            days = 30;
        }
        else {
            days = 31;
        }
    }

    cout << days << " days";
}
