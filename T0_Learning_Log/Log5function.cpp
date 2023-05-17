#include <cstdlib>   // Include rand()
 
using namespace std; // Make rand() visible
 
//dcint a = rand(); // rand is a standard function that all compilers have

/*
When I say that the function returns a value, 
I mean that the function can be used in the same manner as a variable would be.
*/

//The general format for a prototype
//return-type function_name ( arg_type arg1, ..., arg_type argN );
//arg type--type of the argument(int,float,char)

/*
There can be more than one argument passed to a function or none at all
(where the parentheses are empty), and it does not have to return a value. 
Functions that do not return values have a return type of void.
*/


//int mult ( int x, int y );

//example of a fucntion
#include <iostream>
 
using namespace std;
 
//prototype 
int mult ( int x, int y );
 
int main()
{
  int x;
  int y;
   
  cout<<"Please input two numbers to be multiplied: ";

  //be sure to seperate them by a space so cin can tell them apart
  cin>> x >> y;
  cin.ignore();
  cout<<"The product of your two numbers is "<< mult ( x, y ) <<"\n";
  cin.get();
}
 
//definition also serves as prototype
int mult ( int x, int y )
{
  return x * y;
}