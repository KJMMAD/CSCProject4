#include <iostream>
using namespace std;
int main()
{
    bool leap;
    int month, year, day;

    cout << "Enter a month (1-12)";
    cin >> month;
    cout << "\nEnter a year";
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
    else {
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        }
    }
    cout << days << "days";
}
