#include <iostream>
using namespace std;

/*
There are three kinds of loops:
for, while, and do..while
*/

//for loop format
/*
for ( variable initialization; condition; variable update ) {
  Code to execute while the condition is true
}
*/

//eg. for loop
/*
int main()
{
  // The loop goes while x < 10, and x increases by one every loop
  for ( int x = 0; x < 10; x++ ) {
    // Keep in mind that the loop condition checks 
    //  the conditional statement before it loops again.
    //  consequently, when x equals 10 the loop breaks.
    // x is updated before the condition is checked.    
    cout<< x <<endl;
  }
  cin.get();
}
*/

//while loop format
//while ( condition ) { Code to execute while the condition is true }

//eg.while loop, gives the same result as the first example
/*
int main()
{ 
  int x = 0;  // Don't forget to declare variables
   
  while ( x < 10 ) { // While x is less than 10 
    cout<< x <<endl;
    x++;             // Update x so the condition can be met eventually
  }
  cin.get();
}
*/

//DO..WHILE format
//DO..WHILE - DO..WHILE loops are useful for things that want to loop at 
//least once.
/*
do {
} while ( condition );
*/

//A do..while loop is basically a reversed while loop. A while loop says 
//"Loop while the condition is true, and execute this block of code", a 
//do..while loop says "Execute this block of code, and loop while the 
//condition is true".

//Eg. DO WHILE loop
int main()
{
  int x;
 
  x = 0;
  do {
    // "Hello, world!" is printed at least one time
    //  even though the condition is false
    cout<<"Hello, world!\n";
  } while ( x != 0 );
  cin.get();
}

//A common error is to forget that a do..while loop must be terminated with 
//a semicolon (the other loops should not be terminated with a semicolon, 
//adding to the confusion).
