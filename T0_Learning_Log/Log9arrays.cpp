//You can make an array out of any data-type including structures and classes.

//think about arrays like this:
//[][][][][][] 

//declaring an array

/*
//an array with 100 elements, indices 0 - 99
int examplearray[100]; // This declares an array
*/

//mutidimentional array
//eg.
//int twodimensionalarray[8][8];

//filling an array with for loops

#include <iostream>
 
using namespace std;
 
int main()
{
  int x;
  int y;
  int array[8][8]; // Declares an array like a chessboard
   
  for ( x = 0; x < 8; x++ ) {
    for ( y = 0; y < 8; y++ )
      array[x][y] = x * y; // Set each element to a value
  }
  cout<<"Array Indices:\n";
  for ( x = 0; x < 8;x++ ) {
    for ( y = 0; y < 8; y++ )
      cout<<"["<<x<<"]["<<y<<"]="<< array[x][y] <<" ";
    cout<<"\n";
  }
  cin.get();
}

//pointer operation with arrays
/*
char *ptr;
char str[40];
ptr = str;  // Gives the memory address without a reference operator(&)
*/