#include<iostream>
#include<string>

int main()
{

	int randomNumber = rand();
	int Uinput; 
	int number; 
	int guess;
	 
	int chances = 0;
	int hard = 1, int medium = 2, int essy = 3;

	std::cout << "Press 1 for Hard , Press 2 for Medium , Press 3 for easy" << std::endl;
	std::cin >> Uinput;

	if (Uinput == 1)
	{
		
		do {
			chances++;
			(randomNumber % 1000) + 1;
			std::cout << "Pick a number between 1 and 1000" << std::endl;
			std::cin >> number;

			if (number < guess)
			{
				std::cout << "You chosse too high" << std::endl;
			}
			else if (number == guess)
			{
				std::cout << "You won the game" << std::endl;
			}
			
				std::cout << "You have used" << chances << "of 2 chnages" << std::endl;
				while (chances != 2 || number = guess); 


			
		}
	}
}