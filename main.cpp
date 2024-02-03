#include <iostream>
#include <cmath>
using namespace std;

// Define a function to calculate the exponential function using Taylor series
double exp_func(double x)
{
    double sum = 0, T = 1;
    int n = 1;

    sum = sum + T;

    x = x * (3.14159)/180; // Convert degrees to radians
    T = x;

    while (T!=0)
    {
        sum = sum + T;
        n += 1;
        T = T * (x/n);
    }

    return sum;
}

// Define a function to calculate the cosine function using Taylor series
double cos_func(double x)
{
    double sum = 0, T = 1;
    int n = 0;

    x = x * 3.14 / 180; // Convert degrees to radians

    while (T!=0)
    {
        sum = sum + T;
        n += 2;
        T = -T * (x * x) / ((n-1) * n);
    }

    return sum;
}

// Define a function to calculate the sine function using Taylor series
double sin_func(double x)
{
    double sum = 0, T = 0;
    int n = 1;

    x = x * 3.14 / 180; // Convert degrees to radians
    T = x;

    while (T != 0)
    {
        sum = sum + T;
        n = n + 2;
        T = - T * (x * x) / ((n - 1) * n);
    }

    return sum;
}

// Define the main function
int main()
{
    double x, result;
    int choice;

    cout << "Enter the angle in degrees: ";
    cin >> x;

    cout << "Choose the function you want to use:\n";
    cout << "1. Exponential\n";
    cout << "2. Cosine\n";
    cout << "3. Sine\n";
    cin >> choice;

    // Use a switch statement to call the appropriate function
    switch (choice)
    {
        case 1:
            result = exp_func(x);
            cout << "User-defined Exp(" << x << ") = " << result << endl;
            cout << "Built-in Exp(" << x << ") = " << exp(x * 3.14 / 180) << endl;
            break;
        case 2:
            result = cos_func(x);
            cout << "User-defined Cos(" << x << ") = " << result << endl;
            cout << "Built-in Cos(" << x << ") = " << cos(x * 3.14 / 180) << endl;
            break;
        case 3:
            result = sin_func(x);
            cout << "User-defined Sin(" << x << ") = " << result << endl;
            cout << "Built-in Sin(" << x << ") = " << sin(x * 3.14 / 180) << endl;
            break;
        default:
            cout << "Invalid choice. Please enter 1, 2, or 3.\n";
    }

    return 0;
}
