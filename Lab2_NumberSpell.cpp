// outputs the spelling of a number value between 1 and 50
// lab 2 Number Spell
// Joseph Lin
// 01-26-2020

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    cout << "Input number from 01 to 50: ";
    int number;
    cin >> number;

    const int singles = number % 10;
    const int tens = number / 10;


    // prints out the spelling for numbers less then 20

    if (tens == 0)
    {
        switch (singles)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        case 0:
            cout << "";
            break;
        }
    }

    if (tens == 1)
    {
        switch (singles) {
        case 1:
            cout << "eleven";
            break;
        case 2:
            cout << "twelve";
            break;
        case 3:
            cout << "thirteen";
            break;
        case 4:
            cout << "fourteen";
            break;
        case 5:
            cout << "fifteen";
            break;
        case 6:
            cout << "sixteen";
            break;
        case 7:
            cout << "seventeen";
            break;
        case 8:
            cout << "eighteen";
            break;
        case 9:
            cout << "nineteen";
            break;
        case 0:
            cout << "ten";
            break;
        }
    }
    if (tens >= 2)
    {
        switch (tens)
        {
        case 2:
            cout << "twenty";
            break;
        case 3:
            cout << "thirty";
            break;
        case 4:
            cout << "forty";
            break;
        case 5:
            cout << "fifty";
            break;
        }
        switch (singles)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << " two";
            break;
        case 3:
            cout << " three";
            break;
        case 4:
            cout << " four";
            break;
        case 5:
            cout << " five";
            break;
        case 6:
            cout << " six";
            break;
        case 7:
            cout << " seven";
            break;
        case 8:
            cout << " eight";
            break;
        case 9:
            cout << " nine";
            break;
        case 0:
            cout << "";
            break;
        }
    }
return 0;
}

