//A program to determine the grade of students based on their scores in exams
#include <iostream>

using namespace std;

int main()
{
    cout << "Author Mr.Tygercodes." << endl;
    cout << "_______________________________________________________________________" << endl;
    string name;
    double score;

    //prompt user for user name
    cout << "Please Enter your name: " << endl;
    cin >> name;

    //prompt user for input
    cout << "Please enter Your score" << endl;
    cin >> score;

    if (score >= 90 && score <=100)
        cout << "Please " << name
            << " your Grade is: A " << endl;
        else if (score >= 80 && score <=89.99)
            cout << "Please " << name
            << " your Grade is: B" << endl;
        else if (score >= 70 && score <= 79.99)
            cout << "Please " << name
            << " your Grade is: C" << endl;
        else if (score >=60 && score <= 69.99)
            cout << "Please " << name
            << " your Grade is: D" << endl;
        else
            cout << "Please " << name
            << " your Grade is: Fail!" << endl;

    return (0);
}
