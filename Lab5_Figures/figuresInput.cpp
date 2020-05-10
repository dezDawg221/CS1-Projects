// this project uses multiple files to ask the figure the user wants to be drawn
// Lab 5 project 2 
// Joseph Lin
// 02/17/2020

#include <iostream>
#include "figures.hpp"
using std::cin; using std::cout; using std::endl;

int main()
{
	int choice;
	int size;
	char fill;
	do
	{
		cout << "1. square \n2. slash \n3. backslash" << endl;
		cout << "select figure: ";
		cin >> choice;
		if (choice == 1 || choice == 2 || choice == 3)
		{
			cout << "\nselect size: ";
			cin >> size;
			// square function then ask for fill
			switch (choice)
			{
			case 1:
			{
				cout << "\nfilled, hollow, or slashed [f/h/s]: ";
				cin >> fill;
				if (fill == 'f')
				{
					squa(size);
					cout << endl;
				}
				if (fill == 'h')
				{
					hollow(size);
					cout << endl;
				}
				if (fill == 's')
				{
					cross(size);
					cout << endl;
				}
				break;
			}
			case 2:
			{
				slash(size);
				break;
			}

			case 3:
			{
				back_slash(size);
				break;
			}
			default:
			{
				choice = 0;

			}

			}




		}
		else
			choice = 0;
	}
	while (choice == 1 || choice == 2 || choice == 3);
	system("pause");
}
	