//this program creates a game where you have to guess a given age
//Lab 4 project 2
//joseph lin
// 02/10/2020

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout; using std::cin; using std::endl;

int main()
{
	int age, guess;
	srand(time(nullptr));
	age = rand() % 100 + 1;
	do
	{
		cout << "How old am I?  ";
		cin >> guess;
		cout << endl;
		if (guess > age)
		{
			cout << "Wrong, I am younger. ";
		}
		if (guess < age)
		{
			cout << "Wrong, I am older. ";
		}
		if (guess == age)
		{
			cout << "correct" << endl;
		}
		
	} while (guess != age);
	system("pause");
}