#include <iostream>
using namespace std;

//cin<< also comes with the extraction operator >>

/*
when you tell the compiler you are declaring a variable, 
you must include the data type along with the name of the variable.

Basic types: 
char: stores signle character
int: stores integers (numbers without decimal places)
float: stores numbers with decimal places
*/

//examples
int x;
char letter;
float the_float;

//declare multiple variables with comma
int a, b, c, d;

// variable in your code must be declared for your code to run
//It is called undeclared variable error

// C++ IS CASE SENSITIVE

//Eg. Using Vriables

int main()
{
	// var thisnumber is declared as an integer
	int thisisanumber;
 	
 	//quotation marks are not used
	cout<<"Please enter a number: ";

	//c in reads a values into this number, user inputs an integer
	//if the user inputs a decimal, the number would be truncated
	cin>> thisisanumber;

	//when one inputs, c++ takes the enter key
	//cin.ignore ditches enter key
	cin.ignore();

	//Including multiple insertion operators on one line is 
	//perfectly acceptable and all of the output will go to 
	//the same place.
	//One must separate string literals (strings 
	//enclosed in quotation marks) and variables by giving
	// each its own insertion operators (<<).
	cout<<"You entered: "<< thisisanumber <<"\n";

	//remember the semicolon
	cin.get();

	return 1;
}

// Several operators used with variables include the following: 
// *, -, +, /, =, ==, >, <.

// In C++, == compares the values on both sides

// = sets the left input to the equal sign, which must be one, 
// and only one, variable equal to the value on the right side of
// the equal sign.

// The operators that perform mathematical functions should be used 
// on the right side of an equal sign in order to assign the result 
// to a variable on the left side.

//Eg. Operators
// (Note use of comments and of semicolon) a is 24
a = 4 * 6; 
// a equals the original value of a with five added to it
a = a + 5; 
// Does NOT assign five to a. Rather, it checks to see if a equals 5
a == 5     
// Checks to see if a is less than five
a < 5  
// Checks to see if a is greater than five
a > 5  
