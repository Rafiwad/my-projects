#include <iostream>
using namespace std;

int main ()
{
    cout << "Area of a Rectangle" << endl;
    cout << "Author: Mr.Tyger." << endl;
    cout << "________________________" << endl;

    //Declear variables
    float length, width, Area;

    //prompt user to input length and width
    cout << "Enter the Length: "<<endl;
    cin >> length;

    cout << "Enter the Width " <<endl;
    cin >> width;

    Area = length * width;

    cout << "The Area of the Rectangle is: " << Area;

    return(0);
}
