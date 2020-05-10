// Keeping track of shots fired in Battleship game
// using multidimentional arrays
// Mikhail Nesterenko
// 4/13/2013

#include<iostream>

using std::cout; using std::cin; using std::endl;


// size of the ocean
const int oceanLength = 6;
const int oceanWidth = 6;

// function prototypes
int x_coord(char);
void printOcean(bool[oceanLength][oceanWidth]);

int main() 
{
    bool shots[oceanLength][oceanWidth];
    // place your code here
    
    char x_location;
    int y_location;
    char operation;

    // asks user for a shot
    cout << "Make a shot? [y/n]: ";
    cin >> operation;

    // will loop unless user says 'n' 
    while (operation != 'n')
    {
        printOcean(shots);

        cout << "\nLocation?  ";
        cin >> x_location;
        cin >> y_location;
        //marks location
        shots[x_coord(x_location) - 1][y_location - 1] = true;
        // prints shots
        printOcean(shots);

        //ask user for another shot
        cout << "Another shot? [y/n]:  ";
        cin >> operation;
    }
    
    
    system("pause");

    
}

// function definitions

// function to convert the x coord into char
int x_coord(char x_coord)
{
    switch (x_coord) {
    case 'a':
        return 1;
        break;
    case 'b':
        return 2;
        break;
    case 'c':
        return 3;
        break;
    case'd':
        return 4;
        break;
    case 'e':
        return 5;
        break;
    case 'f':
        return 6;
        break;
    default:
        break;
    }
}
//done

//function to print out shot
void printOcean(bool shots[oceanLength][oceanWidth])
{
    cout << "\n All fired shots: " << endl;
    cout << "  a b c d e f";
    //prints ocean graph
    for (int L(0); L < oceanLength; ++L)
    {
        cout << endl << L + 1;
        //width
        for (int W(0); W < oceanWidth; ++W)
        {
            if (shots[W][L] )
                cout << " " << ' ';
            else
            {
                cout << " " << '*';
            }

        }

        cout << endl;       //next row
    }
}
