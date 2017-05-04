#include <iostream>
 
double getTotal(double poundsUsed[], int numELements);

int main(){

	// Declare array
	double pounds[12] = { 400.5 , 450.0, 475.5 , 336.5, 457.0, 325.0 , 220.5, 276.0, 300.0, 320.5, 400.5, 415.0};


	//Declare variables 
	double total = 0.0;
	double average = 0.0; 

	//Calculate Total & Average 
	total = getTotal(pounds, 12); 
	average = total / 12;

	std::cout << "Total pounds:" << total << std::endl;
	std::cout << "Avarage pounds" << average << std::endl;

	system("pause"); 
	return 0;
}

double getTotal(double poundsUsed[], int numELements)
{
	double totalUsed = 0.0; //accumulator 

	for (int sub = 0; sub < numELements; sub += 1)
		totalUsed += poundsUsed[sub];
}
