/*
Commands are either

--Funtions

or

--Keywords

*/

//sample code

//preprocessor

#include <iostream>

//Tells the compiler to use a group of functions that are part of the standard //library (std)
using namespace std;

//Eg. Hello World Function

//Tells compiler that the function is named amin
//int means that the function return an integer
//funtions start and end with {}
int main()
{

	// c out = print
	// << insertion operator indicating what to output
	// The quotes tell the compiler that you want to output the literal string as-is.
	// The '\n' sequence is actually treated as a single character that stands for a newline
	// semicolon is added onto the end of most lines, 
	// such as function calls, in C++.
	cout<<"Hello World! haha\n";

	// cin.get() reads in input and expects the user to hit the return key
	cin.get();

	//program automatically return 0 for a success run
	return 1;
}