//Pointers make some things much easier, help improve your program's efficiency, 
//and even allow you to handle unlimited amounts of data.
//It is also possible to use pointers to dynamically allocate memory.

//Pointers "point" to locations in memory.
//In the computer, pointers are just variables that store memory addresses, 
//usually the addresses of other variables.

//once you can talk about the address of a variable, you'll then be able to 
//go to that address and retrieve the data stored in it.

//If you happen to have a huge piece of data that you want to pass into a function, 
//it's a lot easier to pass its location to the function than to copy every element
//of the data!

//you get a memory address back. And you need pointers to store the memory address.

//A note about terms: the word pointer can refer either to a memory address itself, 
//or to a variable that stores a memory address.

//pointer declaration; asterisk declares a pointer
//<variable_type> *<name>; 

//eg. note the space; declare a pointer that stores the address of an integer
//int *points_to_integer;

/*
eg. multiple declaration
one pointer, one regular int

int *pointer1, nonpointer1;
 
// two pointers
int *pointer1, *pointer2;
*/

/*
dereferencing the pointer: 
in essence, you're taking the reference to some memory address and following it, 
to retrieve the actual value.
*/

/*
When actually using the pointer, you dont need the asterisk
eg.
call_to_function_expecting_memory_address(pointer);
*/

//to ge the value stored at the address, one does *pointer

//To get the memory address of a variable (its location in memory), put the & sign 
//in front of the variable name.

//pointer stores a memory address
//&var gives the address
//*point access the value stored in the address

#include <iostream>
 
using namespace std;
 
int main()
{ 
  int x;            // A normal integer
  int *p;           // A pointer to an integer
 
  p = &x;           // Read it, "assign the address of x to p"
  cin>> x;          // Put a value in x, we could also use *p here
  cin.ignore();
  cout<< *p <<"\n"; // Note the use of the * to get the value
  cin.get();
}

//pointing not to a specific memory address could lead to EXTREMELY unpleasant outcomes
//ALWAYS INITIALIZE POINTERS BEFORE USING THEM

/*
The keyword new is used to initialize pointers with memory from free store (a section 
of memory available to all programs).

eg.

the int after new designate the size of memory

int *ptr = new int;
*/

/*
Careful coder should free the memory after use

The delete operator frees up the memory allocated through new.

delete ptr;

After deleting a pointer, it is a good idea to reset it to point 
to 0. When 0 is assigned to a pointer, the pointer becomes a null 
pointer, in other words, it points to nothing.
*/

/*
In C++, if a call to new fails because the system is out of memory, 
then it will "throw an exception".
*/