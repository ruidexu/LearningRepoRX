include <iostream>

// to compile the code run command:
//		g++ main.cpp -o run
//to execte the program run command:
//		 ./run


void print_statement(){

	std::cout << "Hello World!" <<std::endl;

}

double return_number_sq(double num){
	
	double temp = num*num;	
	
return temp;

}


int main(int argc, char**argv){

	print_statement();

	double r = return_number_sq(-5);

	std::cout<<"Number -5^2 = "<<r<<std::endl;


	for(int i=0;i<10; i++){
		std::cout << "inerration # "<< i <<std::endl;		
	}

	printf("Another way to print \n");

	for(int i=0;i<10; i++){
    		printf("inerration # %i\n", i);
  	}


return 0;

}
