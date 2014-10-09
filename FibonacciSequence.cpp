//Andres Garcia de Alba (R01627379)
//Sept 11, 2014
//Fibonacci Sequence - 
//Enter a number and have the program generate the Fibonacci sequence to that number or to the Nth number

#include <iostream>

using namespace std;

void fibSequence();

int main()
{
	cout << "I will generate the positive Fibonacci index sequence upto the number entered" << endl << endl;
	cout << "To quit, enter -99" << endl << endl;

	fibSequence();

	cout << "Have a good day!" << endl << endl;

	return 0;
}

/****needs a guard against decimal numbers, characters, and strings****/
void fibSequence()
{
	int num = 0;
	while (num != -99)
	{
		cout << "Enter Fibonacci index: ";
		cin >> num;

		if (num < 0 && num != -99) //prints if number entered is less than 0.
		{
			cout << endl << num << " is not a positive number!" << endl << endl; continue; //continue skips the rest of the loop and returns to the top of while loop
		}

		cout << endl;

		int num1 = 0, num2 = 1, fib;

		switch (num) //if only fibonacci # 1 or 0 is desired
		{
		case 1: cout << num1 << ", " << num2; break;
		case 0: cout << num1; break;
		}

		if (num == 1) //if F(1) is desired, while loop goes back to the top.
		{
			cout << endl << endl;
			continue;
		}

		if (num == 0) //if F(0) is desired, while loop goes back to the top.
		{
			cout << endl << endl;
			continue;
		}

		if (num > 1) num -= 1; //if F(n) greater than one is desired, num is reduced by 1.

		for (int i = 0; i < num; i++)
		{

			fib = num1 + num2;

			if (i == 0) //only prints the first two Fib seq #, 0 & 1 on first loop run.
			{
				cout << num1 << ", " << num2;
			}

			cout << ", " << fib; //will always print

			num1 = num2; //swap function in order to move along the Fibonacci sequence
			num2 = fib;

		}//end of for
		cout << endl << endl;
	}//end of while
}//end of fn

