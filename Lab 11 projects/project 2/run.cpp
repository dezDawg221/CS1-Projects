// run program for VarArray
// lab 11 project 2
// joseph lin
// 4/20/2020


#include <iostream>
#include "vararray.hpp"
using std::cin; using std::cout; using std::endl;
int main()
{
	varArray myArray;		// creating an object to hold our array
	// variables for user input
	char operation(' ');
	double number;

	// keeps running the program as long as user does not input q (quit)
	while (operation != 'q')
	{
		// asking user for operation
		cout << "enter operation [a/r/q] and number: ";
		cin >> operation;

		// determines operation to execute
		switch (operation)
		{
			case 'a':			//operation to add number
				cin >> number;
				myArray.addNumber(number);
				myArray.output();
				break;
			case 'r':			// operation to remove a number
				cin >> number;
				myArray.removeNumber(number);
				myArray.output();
				break;
			default:
				cout << "invalid operation try again";
				break;

		}

	}

}