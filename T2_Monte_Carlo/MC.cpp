#include <iostream>
#include <fstream>
#include <random>
#include <chrono>
#include <cmath> 

using namespace std;

//generate a changing seed
unsigned seed = chrono::steady_clock::now().time_since_epoch().count();

//generate pseudo random numbers
default_random_engine e(seed);

int main()
{
	//Initialize input
	ofstream a_file;
	ofstream b_file;

	//open file coordinate.txt in the Task folder
	a_file.open("coordinate.txt");
	//open file num.txt in the Task folder
	b_file.open("num.txt");

	//------------------------------------------------------------------

	//This if func checks if a_file returns 1,
	//Thus finding the file successfully
	if (!a_file)
	{
		//if a_file returns not 1, the open command failed
		cout << "No joy";
		//the program is killed
		exit(-1);
	}
	else
	{
		cout<< "a Out connect"<<"\n";
	}

	//This if func checks if b_file returns 1,
	//Thus finding the file successfully
	if (!b_file)
	{
		//if a_file returns not 1, the open command failed
		cout << "No joy";
		//the program is killed
		exit(-1);
	}
	else
	{
		cout<< "b Out connect"<<"\n";
	}

	//-------------------------------------------------------------------

	//input "x y" into a_file as header, seperated by space
	a_file<< "x y" << "\n";
	//input ""number_c number_t" into b_file as header, seperated by space
	b_file<< "number_c number_t" << "\n";


	//declare two variables for later storing random numbers
	float xval;
	float yval;

	//The nest loop generates n pair of random coordinate in each iteration
	//mega loop with inital n value being 50
	//for each iteration n increases by50
	//The mega loop loops 100 times
	for (int n = 50;n < 5001;n += 50)
	{
		//initialize counter for points within circle at the beginning of each iteration
		int num = 0;

		//internal loop generates n pairs of random coordiantes
		for (int i = 0; i < n; i++)
		{
			//generate randomly x and y values within the range -1,1
			uniform_real_distribution<float> x(-1.0,1.0);
			uniform_real_distribution<float> y(-1.0,1.0);

			//assign the two random numbers to two variables for convenience
			xval = x(e);
			yval = y(e);

			//Find the magnitue of the pair
			float mag = sqrt(pow(xval,2)+pow(yval,2));

			//if mag is smaller than 1
			//ie. inside the ciricle
			//num + 1
			if (mag <= 1)
			{
				num++;
			}
			/*
			else
			{
				num = num;
			}
			*/

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
	}


	//terminates output
	a_file.close();
	b_file.close();
	return 1;
}
