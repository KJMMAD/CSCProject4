#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int choice;
	cout << "Geometry Calculator\n";
	cout << "1.Calculate area of a circle\n2. Calculate area of a rectangle\n3. Calculate area of a triangle\n4.Quit\nPick your choice(1 - 4) ";
	cin >> choice;
	
	if (choice < 1 || choice > 4) {
		cout << "\nInvalid choice";
		return 0;
	}
	double problem;
	switch (choice) {
	case 1:
		double r;

		cout << "Enter the radius of your circle ";
		cin >> r;
		if (r <= 0) {
			cout << "\nInvalid input";
			return 0;
		}

		problem = 3.14159 * pow(r, 2);
		
		cout << "\nThe area of your circle is " << problem;
		break;
	case 2:
		double length, width;

		cout << "Enter the length of your rectangle ";
		cin >> length;
		if (length <= 0) {
			cout << "\nInvalid input";
			return 0;
		}

		cout << "Enter the width of your rectangle ";
		cin >> width;
		if (width <= 0) {
			cout << "Invalid input";
			return 0;
		}

		problem = length * width;
		cout << "\nThe area of your rectangle is " << problem;
		break;
	case 3:
		double base, height;

		cout << "\nEnter the base of your triangle ";
		cin >> base;
		if (base <= 0) {
			cout << "\nInvalid input";
			return 0;
		}

		cout << "\nEnter the height of your triangle ";
		cin >> height;
		if (height <= 0) {
			cout << "\nInvalid input";
			return 0;
		}

		problem = base * height * 0.5;
		cout << "\nThe area of your triangle is " << problem;
		break;
	case 4:
		cout << "Quitting";
		break;
	}
}
