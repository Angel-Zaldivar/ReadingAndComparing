//Author    Angel Zaldivar

//Goal      Read and Compare Two Integers

#include <iostream>

using namespace std;

int main() {
    //Variable Declerations
    int value_a, value_b;
    //input


    cout << "Enter a postive EVEN integer: ";
    cin >> value_a;

    //process - output

    //inside the loop

    while (value_a % 2 == 1 || value_a < 0)
    {
        cout << "ERROR - Expecting a POSTIVE EVEN number - Please try again.\n";
        cout << "\nEnter a postive EVEN integer: ";
        cin >> value_a;
    }

    //outside the loop
    cout << ("---------------------------------------------\n");
    cout << "\nEnter a positive ODD integer: ";
    cin >> value_b;

    //inside the loop

    while (value_b % 2 == 0 || value_b < 0)
    {
        cout << "ERROR - Expecting a POSTIVE ODD number - Please try again.\n";
        cout << "\nEnter a postive ODD integer: ";
        cin >> value_b;
    }

    //outside the loop
    if (value_a > value_b)
    {
        cout << ("---------------------------------------------\n");
        cout << "\nThe first number (" << value_a << ") is larger or equal than the second (" << value_b << ")";
    }
    else {
        cout << ("---------------------------------------------\n");
        cout << "\nThe second number (" << value_b << ") is larger or equal than the first (" << value_a;
    }
}
