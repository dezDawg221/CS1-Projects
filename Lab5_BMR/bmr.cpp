// This is program helps determine as person's Basal Metabolic Rate and how many doughnuts a person can consume based upon that data
//Lab 5 project 1
//Joseph Lin
// 02/12/2020

#include <iostream>
using std::cout; using std::cin; using std::endl;


int bmrWomen(double lbs, double inches, int age);
int bmrMen(double lbs, double inches, int age);
const int doughnuts = 195;

int main()
{
	int num_dough;
	char gender;
	cout << "type in m or f for if your male or female: ";
	cin >> gender;
	if (gender == 'm' || gender == 'M')									// if the gender of the user is male 
	{
		double lbs, inches, feet, height;
		int age;
		cout << "enter in your weight in pounds: ";
		cin >> lbs; cout << endl;
		cout << "enter in the number of feet and inches for your height: ";
		cin >> inches; cin >> feet; cout;
		height = (feet * 12) + inches;
		cout << "enter in your age: ";
		cin >> age; cout << endl;
		cout << "your metabloic rate is ";
		num_dough = bmrMen(lbs, height, age) / doughnuts;
		cout << "\nthe number of doughnuts you can consume are: " << num_dough << endl;

	}
	if (gender == 'f' || gender == 'F')								// if the gender if the user is female
	{
		double lbs, inches, feet, height;
		int age;
		cout << "enter in your weight in pounds: ";
		cin >> lbs; cout << endl;
		cout << "enter in your height in feet and inches: ";
		cin >> inches; cout << endl; cin >> feet; cout << endl;
		height = (feet * 12) + inches;
		cout << "enter in your age: ";
		cin >> age; cout << endl;
		cout << "your metabolic rate is ";
		num_dough = bmrWomen(lbs, height, age) / doughnuts;
		cout << "\nthe number of doughnuts you can consume are: " << num_dough << endl;

	}
	system("pause");
}

int bmrWomen(double lbs, double inches, int age)		//function definition for BMR of females
{
	double BMR;
	BMR = 655 + (4.3 * lbs) + (4.7 * inches) - (4.7 * age);
	cout << BMR;
	return BMR;
} 
int bmrMen(double lbs, double inches, int age)		//funtion definition for BMR of males
{
	double BMR;
	BMR = 66 + (6.3 * lbs) + (12.9 * inches) - (6.8 * age);
	cout << BMR;
	return BMR;
}
