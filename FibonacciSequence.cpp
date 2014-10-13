//Andres Garcia de Alba
//Oct 13, 2014
//Fibonacci Sequence - 
//Enter a number and have the program generate the Fibonacci sequence to that number or to the Nth number

#include <iostream>
#include <iomanip>

using namespace std;

void fibSequence();

int main()
{
	cout << setw(61) << setfill('*') << "" << endl;
	cout << "I will generate the Fibonacci index sequence between F0 - F46" << endl << endl;
	cout << "Up to which index would you like to see?  " << endl << endl;
	cout << "To quit, enter -99" << endl;
	cout << setw(61) << setfill('*') << "" << "\n\n\n";

	fibSequence();

	cout << "Have a good day!" << endl << endl;

	return 0;
}

void fibSequence()
{
	int num = 0; //initialized for while loop
	while (num != -99)
	{
		int fail = 0;
		do
		{
			cout << "Enter Fibonacci index: ";
			cin >> num;
			
			if (fail = cin.fail() || cin.peek() != '\n') //cin.fail returns 1 if input entered does not match the value defined in the variable
														 //or if there are any other characters after an integer that are not the newline character
			{
				cout << "That's not an integer" << endl << endl;
				cin.clear(); //repairs the input stream
				cin.ignore(numeric_limits<int>::max(), '\n'); //clears the buffer
			}

		} while (fail == 1); //keeps looping if cin value does not match int data type


		if ((num < 0 || num > 46) && num != -99) //prints if number entered is 0 - 46 and not -99.
		{
			cout << endl << "I can only generate the Fibonacci index sequence between F0 - F46" << endl << endl; continue; //continue skips the rest of the loop and returns to the top of while loop
		}

		cout << endl;

		/**********************************Start of Fibonacci Sequence*************************************************************************/

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

