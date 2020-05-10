// Makes a usable calculator program with the use of functions 
// Lab 4 project 1 calculator 
//joseph lin
// 02/09/2020

#include <iostream>
#include <cmath>
using std::cin; using std::cout; using std::endl; 

int main()
{
	cout << "1. absolute value \n" << "2. square root \n" <<
		"3. floor \n" << "4. power \n";
	int oper, absol;
	double expo, base;

	do
	{
		cout << "Select an operation: ";
		cin >> oper;
		if (oper >= 1 && oper <=4)
		{ 

			switch (oper)
			{
			case 1:
				cout << endl;
				cout << "enter base: ";
				cin >> absol;
				cout << endl;
				cout << "your result is: " << abs(absol)
					<< endl;
				break;
			case 2:
				cout << endl;
				cout << "enter base: ";
				cin >> base;
				cout << endl;
				cout << "your result is: " << sqrt(base)
					<< endl;
				break;
			case 3:
				cout << endl;
				cout << "enter base: ";
				cin >> base;
				cout << endl;
				cout << "your result is: " << floor(base)
					<< endl;
				break;

			case 4: 
				cout << endl;
				cout << "enter base: ";
				cin >> base;
				cout << endl;
				cout << "enter the exponent";
				cin >> expo;
				cout << "your result is: " << pow(base, expo)
					<< endl;
				break;
			default: 
				cout << "not a operation";
				break;

			}
			

		}
		
	} while (oper >= 1 && oper <= 4);
	system("pause");
}