# Experiment-2

This C++ program demonstrates how different data types work in terms of input, output, and memory usage. It covers fundamental data types such as int, float, char, double, string, and bool.

Purpose:
The program is designed to take user input for each basic data type, display the entered value, and show how much memory (in bytes) each type occupies.

Input and Output Operations:
The program uses cin to receive inputs from the user and cout to print the values along with their respective memory sizes. The sizeof() operator is used to determine the size of each variable in bytes.

Data Types Used:

int: Represents whole numbers.

float: Stores decimal numbers with single precision.

char: Stores a single character.

double: Stores decimal numbers with double precision.

string: A class in C++ to handle text (used here without spaces).

bool: Represents boolean values — either true or false.

String Handling:
By default, cin reads a string until the first whitespace. For full-line input, getline() could be used, but it's commented out here.

Boolean Input:
The program expects the user to enter 1 for true and 0 for false, which is the standard numeric representation of boolean values in C++.

Output Information:
For each data type, the program prints:

The value entered by the user.

The size of that data type using the sizeof() function.

For strings, instead of memory size, it prints the string length using e.length().

Practical Use:
This kind of program is useful for beginners learning about data types, input/output, and memory handling in C++.
