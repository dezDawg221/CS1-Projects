// the program attempts to sort three integers
// in increasing order, it is incomplete
// Joseph Lin
// 1/26/2020

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z;

    int tmp;

    // orders x and y
    if (x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }

    // orders y and z
    if (y > z) {
        tmp = y;
        y = z;
        z = tmp;
    }

    //checks if y is greater than x
    if (y < x) {
        tmp = y;
        y = x;
        x = tmp;

    }

    // outputs the sorted numbers
    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;
}
