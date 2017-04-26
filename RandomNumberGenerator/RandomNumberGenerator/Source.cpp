
#include <iostream>
#include <cstdlib> 
#include <ctime> 

int getRandomNUmber()
{
	int randInteger = 0;

	randInteger = rand() % 100 + 1;;

	return randInteger;
}

int main()
{
	
	
	
	srand(static_cast<int>(time(0)));

	for (int randInteger = 0; randInteger < 10; randInteger++)
	{
		
		std::cout << 1 + (rand() % 6) << std::endl;
	}
	return 0;
}