#include <iostream>
#include <String>

int main()
{
	
	double dozen = 12;
	double dozenPrice = 2.00; 
	double eggPrice = 0.25;


	double eggOrdered , dozenEgg , remainderEgg , total , remainder; 
	std::cout << "How many eggs could you like to buy" << std::endl; 
	std::cin >> eggOrdered; 

	dozenEgg = eggOrdered / dozen;
	remainder = remainderEgg * eggPrice;
	

	


	total = dozenEgg * remainder; 
	
	

	std::cout << "You have " << dozenEgg << " dozen egg" << std::endl;
	
	std::cout << "You price for egg   " << total << std::endl;
	

	
}