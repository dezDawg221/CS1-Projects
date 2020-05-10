// making a program to adjust a vecotr of double numbers
// lab 12 project 1
// joseph lin
// 04/26/2020

#include <iostream>
#include <vector>


using std::cout; using std::cin; using std::endl;
using std::vector;

void output(vector<double>);
bool check(double, vector<double>);



int main()
{
	// declaring 
	vector<double>myVector;
	// variables to hold user operation
	char operation(' ');
	double number;
	// a loop for as long as user does not choose operation q
	while (operation != 'q')
	{
		// ask user for operation
		cout << "enter operation [a/r/q] and number: ";
		cin >> operation;
		switch (operation)
		{
		case 'a':
			cin >> number;
			if (!check(number, myVector))		//checks to see if number doesnt already exist in vector 
				myVector.push_back(number);
			output(myVector);		// print the new vector with added number
			break;
		
		case 'r':
			cin >> number;
			if (check(number, myVector))		// checks to see if the number can be removed
			{
				vector<double>::iterator removed = myVector.begin();	// removed number
				for(vector<double>::iterator i = myVector.begin(); i != myVector.end(); ++i)
					if (*i == number)
					{
						removed = i;
						myVector.erase(removed);
						break;
					}
			}

			output(myVector);			// printing out vector
			break;

		}

		system("pause");
	}

}


//will print out the iterators in the vector
void output(vector<double>& myVector, int size)
{

	for (vector<double>::iterator ip = myVector.begin(); ip != myVector.end(); ++ip)
		cout << *ip << " ";
	cout << endl;
}
// will check if the value of the vector and the number the user inputs is the same
bool check(double number, vector<double>myVector)
{
	for (vector<double>::iterator ip = myVector.begin(); ip != myVector.end(); ++ip)
		if (*ip == number)
			return true;


	return false;

}
