#include<iostream>

int main()
{
	std::cout << "Counting forward : \n"; 
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << "" << std::endl;
	}

	std::cout << "\n\n";

	std::cout << "couting back ward : \n";
	for (int i = 0; i < 10; i--)
	{
		std::cout << i << "" << std::endl;
	} 
	std::cout << "\n\n";

	std::cout << "Counting by five : \n";
	for (int i = 0; i <= 50; i = i +5)
	{
		std::cout << i << "" << std::endl;
	}
	std::cout << "\n\n";

	std::cout << "Counting with nested for loops : \n";
	int row = 5;
	int column = 3;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			std::cout << i << " " << j << ""; 
		}

		std::cout << std::endl;
	}
	system("pause"); 
	return 0;
}