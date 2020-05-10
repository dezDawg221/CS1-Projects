// adds the output of the negative sums in a sequence of numbers
//Joseph Lin
// 02/03/2020

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
	cout << "enter a sequence of numbers using 0 to terminate" << endl;
	int n;
	int output = 0;
	cin >> n;
	while (n != 0)
	{
		if (n < 0)
		{
			output = n + output;
		}
		cin >> n;
	}
	cout << "The sum of the negative values is: " << output << endl;
	system("pause");
}