#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast<unsigned int> (time(0))); 
	int randomNumber = rand(); 
	int die;
////(randomNumber % 10) + 1;
///	int number ;

	int chances = 0;
	int CompNumGuess = rand() % 10 + 1;
	
	int tries = 0;
	std::cout << "Enter a number: ";
	std::cin >> die;

	do {
		chances++; ///= chances + 1;
	////	std::cout << "Pick a number between 1 and 6" << std::endl;
		std::cout << "Computer guess";
		std:: cout << CompNumGuess;
		++tries;
		
		if (CompNumGuess == die)
	{
		std::cout << "Congratulation the number " << tries << "is correct" << std::endl;
		CompNumGuess = rand() % 10 + 1;
	}
		
	
		else if (CompNumGuess > die)
		{
			std::cout << "You chose too high";
		}
		else
			std::cout << "You chose too low";

std::cout << "You have used" << chances << "of 5 chnages" << std::endl;
		

	} while (chances != 5 || CompNumGuess == die);

		std::cout << "Game Over" << chances << "of 5 chances" << std::endl;
		system("pause");
		return 0;
	
}