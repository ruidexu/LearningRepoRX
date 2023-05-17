using namespace std;
#include "helper.h"

//generate a changing seed
unsigned seed = chrono::steady_clock::now().time_since_epoch().count();

//generate pseudo random numbers
default_random_engine e(seed);

// this subroutine returns a xy pair
void random_pair::randomxy()
{

	//generate randomly x and y values within the range -1,1
	uniform_real_distribution<float> x(-1.0,1.0);
	uniform_real_distribution<float> y(-1.0,1.0);

	//assign the two random numbers to two variables for convenience
	xval = x(e);
	yval = y(e);
}



//check if points are in circle
int random_pair::is_in_circle()
{
	
	float mag = sqrt(pow(xval,2)+pow(yval,2));

	if (mag <= 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

//open file and check if it is opened
ofstream random_pair::open_file_and_check(const char * file_name)
{
	ofstream file;
	file.open(file_name);

	if (!file)
	{
		//if a_file returns not 1, the open command failed
		cout << "No joy";
		//the program is killed
		exit(-1);
	}


	return file;
}
/*
void School::print_name(){
}
*/