#include <iostream>
#include <String>

int main()
{
	
	double dozen = 12;
	double dozenPrice = 2.00; 
	double eggPrice = 0.25;


	double eggOrdered , dozenEgg , totalegg , remainderegg , total; 
	std::cout << "How many eggs could you like to buy" << std::endl; 
	std::cin >> eggOrdered; 

	dozenEgg = eggOrdered / dozen;
	remainderegg = eggOrdered % 12;
	

	

	total = dozenEgg * dozenPrice;
	totalegg = dozenEgg * remainderegg; 
	
	

	
	std::cout << "Your price for " << dozenEgg << " dozen egg  is  $" << total << std::endl;
	std::cout << "You price for egg   " << totalegg << std::endl;
	

	
}