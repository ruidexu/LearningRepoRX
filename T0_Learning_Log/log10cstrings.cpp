//C++-style strings

using namespace std;
 
string my_string;

string my_string("starting value");

cin>>my_string;

/*
The following code reads a line from standard input (e.g., the keyboard) 
until a newline is entered.
*/

using namespace std;
getline(cin, my_string, '\n');


/*
or
std::string my_string;
*/

string my_string1 = "a string";
string my_string2 = " is this";
string my_string3 = my_string1 + my_string2;
 
// Will ouput "a string is this"
cout<<my_string3<<endl;

//+= also works

/*
Fortunately, for C++ strings, all of the typical relational operators work 
as expected to compare either C++ strings or a C++ string and either a C 
string or a static string (i.e., "one in quotes").
*/

//eg.
string passwd;
 
getline(cin, passwd, '\n');
if(passwd == "xyzzy")
{
    cout<<"Access allowed";
}

//take the length of the string
string my_string1 = "ten chars.";
int len = my_string1.length(); // or .size();

//strings are actually sequences
string::iterator my_iter;
for(my_iter = my_string.begin(); my_iter != my_string.end(); my_iter++)
{
    cout<<*my_iter;
}