/*
 ======================================================================================================================
 Name                 : Calculator.cpp
 Author               : Moataz Elhawary
 Created on	    : Dec 16, 2023
 ======================================================================================================================
*/


#include <iostream>

using namespace std;

int main()
{
    while(1)
    {

        char operation;
        double num1, num2, result;


        // Get user input for Number_1
        cout << "Enter first number: ";
        cin >> num1;

        // Get user input for operation
        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;

        // Get user input for Number_2
        cout << "Enter second number: ";
        cin >> num2;


        // Perform the calculation based on the chosen operation
        switch (operation)
        {
        case '+':
            result = num1 + num2;
            break;


        case '-':
            result = num1 - num2;
            break;


        case '*':
            result = num1 * num2;
            break;


        case '/':

            // Check for division by zero
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                cout << "Error! : Division by zero is not allowed." << endl;    // Exit with an error code
                return 1;
            }
            break;
        default:
            cout << "Error! : Invalid operator." << endl;
            return 1;  // Exit with an error code
        }

        // Display the result
        cout << "Result : " << result << endl;


        cout << "============================================\n" ;

    }
    return 0;  // Exit successfully
}
