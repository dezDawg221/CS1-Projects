// this file contains the function definitions for squa, slash, back_slash
// lab 5 project 2 
// joseph lin
// 02/17/2020

#include <iostream>
using std::cin; using std::cout; using std::endl;
int c, r;
void squa(int size)
{
	for (c = size; c > 0; --c)
	{
		cout << "*";
		for (r = size; r > 1; --r)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void slash(int size)
{
	for (c = 1; c <= size; c++)
	{
		for (r = 1; r <= size; r++)
		{
			if (r == c)
			{
				cout << "*";
			}
			else
				cout << " ";

		}
		cout << endl;
	}
	cout << endl;
}
void back_slash(int size)
{
	for (c = 1; c <= size; c++)
	{
		for (r = 1; r <= size; r++)
		{
			if (r == size - c + 1)
			{
				cout << "*";
			}
			else
				cout << " ";

		}
		cout << endl;
	}
	cout << endl;
	return;
}
void hollow(int size)
{

	for (c = 1; c <= size; c++)
	{
		for (r = 1; r <= size; r++)
		{
			if (c == 1 || c == size || r == 1 || r == size)
			{
				cout << "*";
			}
			else
				cout << " ";


		}
		cout << endl;
	}
	cout << endl;
	return;
}
void cross(int size)
{
	for (c = 1; c <= size; c++)
	{
		for (r = 1; r <= size; r++)
		{
			if (c == 1 || c == size || r == 1 || r == size
				|| c == r || r == (size - c + 1))
			{
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	return ;
}