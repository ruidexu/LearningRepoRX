#include <iostream>
#include <fstream>
#include <random>
#include <chrono>
#include <cmath> 


class random_pair
{
	public:
		float xval;
		float yval;
		void randomxy();

		int is_in_circle();

		ofstream open_file_and_check(const char * file_name);
};



/*
class school
{
public:
	//if there is not a constructor, members are set to default
	int student_num;
	string name;

	school(int SCHOOOLL, string NAMEEEE) : student_num(SCHOOOLL), name(NAMEEEEE)
	{
	}
}
*/
