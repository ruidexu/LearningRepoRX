/*
Structures are a way of storing many different values in variables of 
potentially different types under the same name.
*/

//The format for defining a structure is

/*
tag: the name of the type of structure
members: variables within the struct

struct Tag {
  Members
};
*/

//declare a single structure

//struct Tag name_of_single_structure;

//To access a variable of the structure it goes

//name_of_single_structure.name_of_variable;

//eg. template

/*
struct example {
  int x;
};
struct example an_example; //Treating it like a normal variable type
an_example.x = 33;  //How to access its members
*/

/*
//eg. program
struct database {
  int id_number;
  int age;
  float salary;
};
 
int main()
{
  database employee;  //There is now an employee variable that has modifiable 
                      // variables inside it.
  employee.age = 22;
  employee.id_number = 1;
  employee.salary = 12000.21;
}
*/

//You can also return structures from functions by defining their return type 
//as a structure type.

//database fn();

//Union: structures sharing the same memory

/*
As a final note, if you wish to have a pointer to a structure, to actually access 
the information stored inside the structure that is pointed to, you use the -> 
operator in place of the . operator. All points about pointers still apply.
*/

//eg.

#include <iostream>
 
using namespace std;
 
struct xampl {
  int x;
};
 
int main()
{  
  xampl structure;
  xampl *ptr;
   
  structure.x = 12;
  ptr = &structure; // Yes, you need the & when dealing with structures
                    //  and using pointers to them
  cout<< ptr->x;    // The -> acts somewhat like the * when used with pointers
                    //  It says, get whatever is at that memory address
                    //  Not "get what that memory address is"
  cin.get();                    
}