// creates a pattern of stars in a figure based on a given size
// Lab3 project 2 Figures 
//joseph lin
// 02/03/2020

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
	int c, r, size;
	int count;

	cout << "enter the size of figure";
	cin >> size;

	// figure 1

	for (c = size; c > 0; --c)
	{
		cout << "*";
		for (r = size; r > 1; --r)
		{
			cout << "*";
		}
		cout << endl;
	}

	//figure 2

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

	//figure 3

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
	//figure 4

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

	//figure 5

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
	system("pause");
}
