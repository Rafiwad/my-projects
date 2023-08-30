//A program to determine the type of triangle based on user input

#include <iostream>

using namespace std;

int main()
{
    cout << "Author Mr.T_yger" << endl;
    cout << "__________________________________________________________________" << endl;
    //declaring variables
    float Side1, Side2, Side3;

    //prompt user for inputs
    cout << "Please Enter Side 1 of the Triangle!" << endl;
    cin >> Side1;
    cout << "Please Enter the Side 2 of the Triangle!" << endl;
    cin >> Side2;
    cout << "Please Enter the Side 3 of the triangle!" << endl;
    cin >> Side3;

    //An iteration to determine the type of triangle.
    if (Side1 == Side2 && Side1 == Side3)
        cout << "The the Shape is: Equilateral Triangle." << endl;
        else if (Side1 == Side2 || Side3 == Side2 || Side1 == Side3)
            cout << "The Shape is : Isosceles Triangle!" << endl;
        else
            cout << "The shape is : Scalene Triangle!" << endl;

    return (0);
}
