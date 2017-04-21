#include<iostream>
#include<string>

int main()
{

	int randomNumber = rand();
	int randomNumber2 = rand();
	int randomNumber3 = rand();

	int Uinput;
	int number;
	int number2;
	int number3;
	int guess;
	int guess2;
	int guess3;


	int chances = 0;
	int chances2 = 0;
	int chances3 = 0;
	int hard = 1,  medium = 2,  essy = 3;

	std::cout << "Press 1 for Hard , Press 2 for Medium , Press 3 for easy" << std::endl;
	std::cin >> Uinput;

	if (Uinput == 1) {

		do {
			chances++;
			(randomNumber % 1000) + 1;
			std::cout << "Pick a number between 1 and 1000" << std::endl;
			std::cin >> number;

			if (number > guess)
			{
				std::cout << "You chosse too high" << std::endl;
			}

			else if (number == guess || chances != 2)
			{
				std::cout << "You won the game" << std::endl;
				std::cout << "You have used" << chances << "of 2 chnages" << std::endl;
			}

		} while (chances != 2 || number == guess );
		std::cout << "Game Over" << chances << "of 5 chances" << std::endl;
	
	}

	if (Uinput == 2){
		do {
			chances2++;
			(randomNumber2 % 100) + 1;
			std::cout << "Pick a number between 1 and 1000" << std::endl;
			std::cin >> number2;

			if (number2 < guess2)
			{
				std::cout << "You chosse too high" << std::endl;
			}

			else if (number2 == guess2 || chances2 != 4)
			{
				std::cout << "You won the game" << std::endl;
				std::cout << "You have used" << chances2 << "of 2 chnages" << std::endl;
			}

		} while (chances2 != 4 || number2 == guess2);
		std::cout << "Game Over" << chances2 << "of 5 chances" << std::endl;
	
	}

	if (Uinput == 3) {
		do {
			chances++;
			(randomNumber3 % 50) + 1;
			std::cout << "Pick a number between 1 and 1000" << std::endl;
			std::cin >> number3;

			if (number3 < guess3)
			{
				std::cout << "You chosse too high" << std::endl;
			}

			else if (number3 == guess3 || chances3 != 6)
			{
				std::cout << "You won the game" << std::endl;
				std::cout << "You have used" << chances3 << "of 2 chnages" << std::endl;
			}

		} while (chances3 != 6 || number3 == guess3);
		std::cout << "Game Over" << chances3 << "of 5 chances" << std::endl;
		system("pause");
		return 0;
	}
}