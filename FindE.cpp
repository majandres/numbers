//Author: Andres Garcia de Alba 
//Date
//Find e to the Nth Digit. 
//Enter a number and have the program generate e up to that many decimal places. 
//Keep a limit to how far the program will go.

#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void eGenerator(int);

int main()
{
	int num = -1;

	cout << "I will generate E up to 16 decimal places" << endl << endl;
	cout << "To quit, enter 0" << endl << endl;

	eGenerator(num);

	cout << endl << "Have a good day!" << endl << endl;

	return 0;
}

void eGenerator(int num)
{
	while (num != 0)
	{

		cout << "How many places would you like? ";
		cin >> num;
		if (num == 0) break;
		if (num > 16)
		{
			cout << endl << "I can only do up to 16 decimal places" << endl
				<< "Try again!" << endl << endl;
			continue;
		}
		cout << "E is: " << endl;
		cout << fixed << setprecision(num);
		cout << M_E;
		cout << endl << endl;
	}
}