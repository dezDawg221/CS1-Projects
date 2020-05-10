// contains function definitions
// lab 11 project 1
// joseph lin
// 04/16/2020

#include <iostream>
#include "vararray.hpp"

using std::cout; using std::cin; using std::endl;

// void constructor to intialize variable
varArray::varArray()
{
	size_ = 0;
	array_ = new double{};
}
// done 

// copy constructor 
varArray::varArray(const varArray& a1) 
{
	// coping elements of the array to the dynamic array
	size_ = a1.size_;
	array_ = new double[size_];
	for (int i(0); i < size_; i++)
		array_[i] = a1.array_[i];
}
// done

// destructor
varArray::~varArray()
{
	delete[] array_;
}
// done

// assignment overload
varArray& varArray::operator= (const varArray& a3)
{
	// check if they are equal
	if (this != &a3)
	{
		size_ = a3.size_;
		delete[] array_;
		array_ = new double[size_];
		// copies elements
		for (int i(0); i < size_; i++)
			array_[i] = a3.array_[i];
	}
	return *this;
}



int varArray::check(double number)
{
	for (int i(0); i < size_; ++i)
	{
		if (array_[i] == number)
			return i;
	}
	return -1;
}
// done

void varArray::addNumber(double number)
{
	if (check(number) == -1)
	{
		// new array to hold new size
		double* array2 = new double[size_ + 1];
		// copies the old array ober to the new array
		for (int i(0); i < size_; i++)
			array2[i] = array_[i];
		// adds onto the array the added number 
		array2[size_] = number;
		// deallocate the old dynamic array
		delete[] array_;
		array_ = array2;
		size_++;
		
	}
}
// done

void varArray::removeNumber(double number)
{
	if (check(number) != -1)
	{
		// makes a new array to hold the new size
		double* array2;
		array2 = new double[size_ - 1];
		// variable to hold the number to remove
		bool found = false;
		for (int i(0); i < size_; ++i)
		{
			if (array_[i] == number)
				found = true;
			else
			{
				if (!found)
					array2[i] = array_[i];		// if not found set number to the old array number
				else
					array2[i - 1] = array_[i];	// if it is found it copies the number to the left instead
			}
		}
		// deallocate old array
		delete[] array_;
		// set new array
		array_ = array2;
		--size_;
	}
}
// done

void varArray::output()
{
	for (int i(0); i < size_; ++i)
	{
		cout << array_[i] << "  ";
	}
	cout << endl;
}
// done




