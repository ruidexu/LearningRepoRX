#include <iostream>
using namespace std;

/*
A true statement is one that evaluates to a nonzero number.
A false statement evaluates to zero. 

When you perform comparison with the relational operators, 
the operator will return 1 if the comparison is true, or 0 
if the comparison is false.

For example, the check 0 == 2 evaluates to 0. 
The check 2 == 2 evaluates to a 1.
*/

//All inequalities
/*
>     greater than              5 > 4 is TRUE
<     less than                 4 < 5 is TRUE
>=    greater than or equal     4 >= 4 is TRUE
<=    less than or equal        3 <= 4 is TRUE
==    equal to                  5 == 5 is TRUE
!=    not equal to              5 != 4 is TRUE
*/

//If statement structure
/*
if ( TRUE )
  Execute the next statement;
*/

/*
int main()
{
if ( 5 < 10 )
    cout<<"Five is now less than ten, that's a big surprise";

	cin.get();

	return 1;
}
*/

//Else structure
/*
if ( TRUE ) {
  // Execute these statements if TRUE;
}
else {
  // Execute these statements if FALSE;
}
*/

//Else if structure
/*
if ( <condition> ) {
  // Execute these statements if <condition> is TRUE
}
else if ( <another condition> ) {
  // Execute these statements if <another condition> is TRUE and
  // <condition> is FALSE
}
*/


//if else else-if composite example
int main()                            // Most important part of the program!
{
  int age;                            // Need a variable...
   
  cout<<"Please input your age: ";    // Asks for age
  cin>> age;                          // The input is put in age
  cin.ignore();                       // Throw away enter
  if ( age < 100 ) {                  // If the age is less than 100
     cout<<"You are pretty young!\n"; // Just to show you it works...
  }
  else if ( age == 100 ) {            // I use else just to show an example 
     cout<<"You are old\n";           // Just to show you it works...
  }
  else {
    cout<<"You are really old\n";     // Executed if no other statement is
  }
  cin.get();
}

//the C++ symbols are not: OR, AND, NOT, although they are of equivalent function.

/*
NOT (!): 
The NOT operator accepts one input. 
If that input is TRUE, it returns FALSE, and if that input is FALSE, 
it returns TRUE.

NOT is evaluated prior to both AND and OR.
*/

/*
AND (&&): 
This is another important command. AND returns TRUE if both inputs 
are TRUE (if 'this' AND 'that' are true).

AND operator is evaluated before the OR operator.
*/

/*
OR (||):
If either (or both) of the two values it checks are TRUE then it returns TRUE.

Keep in mind that OR will be evaluated after AND.
*/
