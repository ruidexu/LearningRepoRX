//switch break example

/*
switch ( <variable> ) {
case this-value:
  Code to execute if <variable> == this-value
  break;
case that-value:
  Code to execute if <variable> == that-value
  break;
...
default:
  Code to execute if <variable> does not equal the value following any of the cases
  break;
}
*/

//If this-value or that-value == variale, do what is after the colon

//Break is a keyword that breaks out of the code block, 
//usually surrounded by braces, which it is in

//In this case, break prevents the program from falling through and 
//executing the code in all the other case statements.

//for the switch statement, the case values may only be constant integral expressions. 

//Illegal case
/*
int a = 10;
int b = 10;
int c = 20;
 
switch ( a ) {
case b:
  // Code
  break;
case c:
  // Code
  break;
default:
  // Code
  break;
}
*/

//example
#include <iostream>
 
using namespace std;

/*
Function argument: int myFunc(void) -- the function takes nothing.

Function return value: void myFunc(int) -- the function returns nothing
*/

void playgame()
{
    cout << "Play game called";
}
void loadgame()
{
    cout << "Load game called";
}
void playmultiplayer()
{
    cout << "Play multiplayer game called";
}
     
int main()
{
  int input;
   
  cout<<"1. Play game\n";
  cout<<"2. Load game\n";
  cout<<"3. Play multiplayer\n";
  cout<<"4. Exit\n";
  cout<<"Selection: ";
  cin>> input;
  switch ( input ) {
  case 1:            // Note the colon, not a semicolon
    playgame();
    break;
  case 2:            // Note the colon, not a semicolon
    loadgame();
    break;
  case 3:            // Note the colon, not a semicolon
    playmultiplayer();
    break;
  case 4:            // Note the colon, not a semicolon
    cout<<"Thank you for playing!\n";
    break;
  default:            // Note the colon, not a semicolon
    cout<<"Error, bad input, quitting\n";
    break;
  }
  cin.get();
}