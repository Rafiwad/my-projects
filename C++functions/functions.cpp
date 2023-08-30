//a program to take two numbers and operator and perform operation based on operator
#include <iostream>

using namespace std;

int performOperation(int numb1, int numb2, char op)
{
    int result;
    switch(op){
        case '+':
            result = numb1 + numb2;
            break;
        case '-':
            result = numb2 + numb2;
            break;
        case '%':
            result = numb1 % numb2;
            break;
        case '/':
            result = numb1 / numb2;
            break;
        case '*':
            result == numb1 * numb2;
            break;
        default:
            cout << "Invalid Operator!";
            return (0);
    }

    return result;
}
    int main()
    {
        int numb1, numb2; //integer numbers
        string gender; //string gender male or female.
        char op;

        cout << "Please Enter Your gender: \n";
        cin >> gender;

        if(gender == "Female" || gender == "F" || "f" || gender == "female")
        {
            cout << "The person is Female! \n"; //determines if user is female
        }
        else if(gender == "Male" || gender == "M" || gender == "m" || gender == "male")
        {
            cout << "The person is male! \n"; //determines if user is male
        }
        else
        {
            cout << "The gender is not recognized. \n"; //prompts user if anything aside gender is entered.
        }

        cout << "Please Enter first number: "
        << endl;
        cin >> numb1;

        cout << "Please Enter second number: "
        << endl;
        cin >> numb2;

        cout << "Enter operator(+,*,/,-,%): \n";
        cin >> op;

        int result = performOperation(numb1, numb2, op); //calls the function for operation

        cout << "Result: " << result << endl;

        return (0);
    }
