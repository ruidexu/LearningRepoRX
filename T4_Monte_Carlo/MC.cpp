//NO top level namespace using statements in a header file!
using namespace std;

#include "helper.h"


// learn about "class": Each class has at least construction and destructor + custom functins.
// define x y pairs a signle class
// define random number generator for x and y as a function of the class "random_pair"
// learn about headers 
// split  your code into separte files:
// MC.cpp -> this contains main function only 
// random_pair.h => this one will contain the class definition
// random_pair.cpp => this one will contain class function members.

random_pair ran;

int main()
{
	ofstream a_file = ran.open_file_and_check("coordinate.txt");
	ofstream b_file = ran.open_file_and_check("num.txt");

	//input "x y" into a_file as header, seperated by space
	a_file<< "x y" << "\n";
	//input ""number_c number_t" into b_file as header, seperated by space
	b_file<< "number_c number_t" << "\n";

	//declare two variables for later storing random numbers
	float xval;
	float yval;

	//The nest loop generates n pair of random coordinate in each iteration
	//mega loop with initial n value being 50
	//for each iteration n increases by 50
	//The mega loop loops 100 time
	double pi;
	for (int n = 50;n < 5001;n += 50)
	{
		//initialize counter for points within circle at the beginning of each iteration
		int num = 0;

		//internal loop generates n pairs of random coordiantes
		for (int i = 0; i < n; i++)
		{
			ran.randomxy();
			if(ran.is_in_circle() == 1)
			{
				num++;
			}
			//If there 5000 pairs of coordinates, output the single pairs in this in the format:
			//"x_coordiante y_coordinate"
			if (n == 5000)
			{
				//input xval into the file
				a_file<< xval <<" ";
				//input yval into the file
				a_file<< yval <<"\n";
			}
		}
		//number of points inside the circle and total number of points are inputted in to b_file
		//under the format "number_of_points_inside_cicle total_number_of_points"
		b_file<< num << " ";
		b_file<< n << "\n";
		pi = (4.0*num)/n;
	}
	
	cout<<"Pi =" << pi<<"\n";
	//terminates output
	a_file.close();
	b_file.close();
	return 1;
}
