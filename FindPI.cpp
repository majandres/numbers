//Author: Andres Garcia de Alba 
//October 8, 2014
//Find PI to the Nth Digit - 
//Enter a number and have the program generate PI up to that many decimal places.
//Keep a limit to how far the program will go.

#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void PIgenerator(int);

int main()
{
	int num = -1;

	cout << "I will generate PI up to 16 decimal places" << endl << endl;
	cout << "To quit, enter 0" << endl << endl;
	
	PIgenerator(num);
	
	cout << endl << "Have a good day!" << endl << endl;

	return 0;
}

void PIgenerator(int num)
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
		cout << "PI is: " << endl;
		cout << fixed << setprecision(num);
		cout << M_PI;
		cout << endl << endl;
	}
}