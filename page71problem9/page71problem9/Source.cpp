#include <iostream>
#include <string>

int main()
{
	int BiteYes = 1, BitesNo = 2; 
	double bagels = 99, donuts = 75, coffee = 1.20;
	int NumOrderdB, NumOrderdD, NumOrderdC;
	double Btotal, Dtotal, Ctotal , total;

	std :: cout << "Welcome to  Bites";
	std :: cout << " If you want to eat brakefast 1 for Yes , 2 for NO  ";
	std :: cin >> BiteYes;

	if (BiteYes == 1)
	{
		std::cout << " How many Bagels do you want" << std::endl;
		std::cin >> NumOrderdB;
		std::cout << " How many donuts do you want" << std::endl;
		std::cin >> NumOrderdD;
		std::cout << " How many coffee do you want" << std::endl;
		std::cin >> NumOrderdC;

		Btotal = NumOrderdB * bagels;
		Dtotal = NumOrderdD * donuts;
		Ctotal = NumOrderdC * coffee;

		total = Btotal + Dtotal + Ctotal;

		std::cout << " Your total for today is $ " << total << std::endl;

	}
	else if (BitesNo = 2)
		std::cout << "Sorry come next time" << std::endl;
}