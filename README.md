# Project: Taylor Series Calculator

This project is a C++ program that calculates the exponential, cosine, and sine functions using Taylor series approximation. The user can enter an angle in degrees and choose which function they want to use. The program will display the user-defined and built-in values of the function for comparison.

## How to run the program

To run the program, you need a C++ compiler and an IDE (Integrated Development Environment) that supports C++. You can use any compiler and IDE of your choice, such as GCC and Visual Studio Code. 

To compile the program, open the terminal or command prompt and navigate to the folder where you saved the project file. Then type the following command:

`g++ -o taylor taylor.cpp`

This will create an executable file named `taylor` in the same folder. To run the program, type the following command:

`./taylor`

The program will prompt you to enter the angle in degrees and the function you want to use. You can enter 1 for exponential, 2 for cosine, or 3 for sine. The program will then display the user-defined and built-in values of the function.

## How the program works

The program uses three functions to calculate the exponential, cosine, and sine functions using Taylor series. Each function takes a double parameter `x` which represents the angle in degrees. The functions convert the angle to radians by multiplying it by `3.14 / 180`. Then they use a loop to add the terms of the Taylor series until the term becomes zero or negligible. The functions return the sum of the terms as the result.

The main function asks the user to enter the angle in degrees and the function they want to use. It then uses a switch statement to call the appropriate function and display the result. It also uses the built-in functions `exp`, `cos`, and `sin` from the `cmath` library to compare the results.

## Limitations and improvements

The program has some limitations and possible improvements, such as:

- The program uses a fixed value of `3.14` as an approximation of pi. A more accurate value could be used, such as `3.14159` or `M_PI` from the `cmath` library.
- The program does not check for invalid input, such as negative angles, non-numeric values, or values outside the range of 1, 2, or 3. The program could use input validation techniques, such as `cin.fail()` or `try-catch` blocks, to handle errors and exceptions.
- The program does not allow the user to repeat the calculation or exit the program. The program could use a loop or a menu to let the user perform multiple calculations or quit the program.
