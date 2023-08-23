/**
*A program that reads number
* and determine if number is negative, positive or zero
**/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    double numb1;
    double positive, negative, zero;

    cout << "Input your number: \n";
    cin >> numb1;

    if (numb1 < 0.0)
    cout << "The number you entered is negative!";
    else if (numb1 > 0.0)
        cout << "The number you entered is positive!";
    else
        cout << "The number you entered is Zero!";

    return (0);
}
