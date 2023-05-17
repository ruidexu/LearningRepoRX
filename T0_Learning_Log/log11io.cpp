//C++ has two basic classes to handle files, ifstream and ofstream.

//Ifstream handles file input (reading from files)
//declare
/*
ifstream a_file;
or
ifstream a_file ( "filename" );
*/

#include <fstream>
#include <iostream>
 
using namespace std;
 
int main()
{
  char str[10];
 
  //Creates an instance of ofstream, and opens example.txt
  ofstream a_file ( "example.txt" );
  // Outputs to example.txt through a_file
  a_file<<"This text will now be inside of example.txt";
  // Close the file stream explicitly
  a_file.close();
  //Opens for reading the file
  ifstream b_file ( "example.txt" );
  //Reads one string from the file
  b_file>> str;
  //Should output 'this'
  cout<< str <<"\n";
  cin.get();    // wait for a keypress
  // b_file is closed implicitly here

/*
ios::app   -- Append to the file
ios::ate   -- Set the current position to the end
ios::trunc -- Delete everything in the file
*/

//eg.
	
//ofstream a_file ( "test.txt", ios::app );

//test if a file is opened
if ( !a_file.is_open() ) {
  // The file could not be opened
}
else {
  // Safely use the file stream
}