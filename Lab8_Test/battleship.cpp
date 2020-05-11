// This file will have the function defintions for battleship.hpp
// lab8 project 1
// joseph lin
// 03/24/2020

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "battleship.hpp"		//including files needed

using std::cout; using std::cin; using std::endl;
using std::rand; using std::srand;
using std::time;

void initialize(Ship myFleet[fleetSize])				//initalizes loc of myFleet *note: bool values default initialize to false
{
	for (int i = 0; i < fleetSize; i++)
	{
		myFleet[i].loc.x = -1;
		myFleet[i].loc.y = '*';
	

	}
}
// done
Location pick()
{
	// generates random x axis from 1-6
	int x_axis;		// variable to hold a random x axis location
	srand(time(nullptr));
	Location mySpot;

	x_axis = rand() % 6 + 1;
	mySpot.x = x_axis;		// set random x axis location 1-6

	//generates random y axis from a-f
	int y_axis;		// variable to hold a random y axis location
	y_axis = rand() % 6 + 1;
	switch (y_axis)		// changes random value of 1-6 to a-f
	{
	case 1:
		y_axis = 'a';
		break;
	case 2:
		y_axis = 'b';
		break;
	case 3:
		y_axis = 'c';
		break;
	case 4:
		y_axis = 'd';
		break;
	case 5:
		y_axis = 'e';
		break;
	case 6:
		y_axis = 'f';
		break;
	default:
		cout << "error check your pick()";
		break;
	}
	mySpot.y = y_axis;		// sets random y axis location
	return mySpot;
}
//done
Location fire()
{
	Location mySpot;
	int shotX;
	char shotY;
	cout << "input coordinates for your shot: ";
	cin >> shotX >> shotY;
	mySpot.x = shotX;
	mySpot.y = shotY;
	return mySpot;
}
//done
int check(const Ship myFleet[fleetSize], const Location& mySpot)
{
	for (int i = 0; i < fleetSize; i++)
	{
		if (myFleet[i].loc.x == mySpot.x && myFleet[i].loc.y == mySpot.y)
			return i;

	}
	return -1;
}
// done (?)
bool match(const Ship& myShip, const Location& mySpot)
{
	if (myShip.loc.x == mySpot.x && myShip.loc.y == mySpot.y)
	{
		return true;
	}
	else
		return false;

	
}		
// done
void sink(Ship& myShip)
{
	 myShip.sunk = true;
}
// done
void printShip(const Ship& myShip)		//check
{
	cout << "\ncurrent location of ship: (" << myShip.loc.x << "," << myShip.loc.y << ")" << endl;
	if (myShip.sunk == true)
		cout << "ship sunk status: true" << endl;			// these lines will convert 0 or 1, to true or false.
	if (myShip.sunk == false)
		cout << "ship sunk status: false" << endl << endl;
	
		
}
// done
void printFleet(const Ship myFleet[fleetSize])
{
	for (int i = 0; i < fleetSize; i++)						// fix ship 6
	{
		cout << "for ship " << i << ": \n";
		cout << "location: (" << myFleet[i].loc.x << "," << myFleet[i].loc.y << ") \n";
		if (myFleet[i].sunk == true)
			cout << "ship sunk status: sunked" << endl;
		if (myFleet[i].sunk == false)
			cout << "ship sunk status: still standing" << endl;
	}
}
// done
void deploy(Ship myFleet[fleetSize])
{
	int var_check;		// temp variable to hold value of check() function   
	Ship myShip;
	myShip.loc.x = 1;
	myShip.loc.y = 'f';
	Location mySpot;
	mySpot.x = -1;
	mySpot.y = '*';
	int deployed(0);		// variable to hold number of deployed ships


	while (deployed < 6)		// while the number of ships deployed isnt 6 it will keep repeating until all 
	{							// ships are deployed
		mySpot = pick();		// picks a random coord for location mySpot
		var_check = check(myFleet, mySpot);
		if (var_check  == -1)		// checks if there is a existing ship that takes the 
		{						// place of mySpot. If not set it to the new ship's coord
			myFleet[deployed].loc.x = mySpot.x;
			myFleet[deployed].loc.y = mySpot.y;
			myFleet[deployed].sunk = false;
			deployed++;
		}
			
	}

	

}
// done 
bool operational(const Ship myFleet[fleetSize])
{
	for (int i = 0; i < fleetSize; i++)
	{
		if (myFleet[i].sunk == false)
			return true;
	}
	return false;
}
// done