#include<iostream>
#include<String>

int main()
{
	int sideA = 1, sideB = 2, sideC = 3;
	
int tinput;
int Sinput;
///int rightside

int RightTriangle = 1, IsoscelesTriangle = 2, EquilateralTriangle = 3;

std::cout << " Press 1 for Right Triangle, Press 2 for Isosceles Triangle, Press 3 for Equilateral" << std::endl;
std::cin >> tinput; 

if (tinput == 1)
{
	std::cout << " Enter the  missing  side of Right Triangle  1 = SideA , 2 = SideB , 3 = SideC "; 
	std::cin >> Sinput;

	 if (Sinput == 2)
	{
		std::cout << "Enter sideA";
		std::cin >> sideA;

		std::cout << "Enter sideB";
		std::cin >> sideB;
		
		sideC = sqrt((sideA * sideA) + (sideB * sideB));

		std::cout << " The three side of Right  triangle is  " << sideC;

	}
	else if (Sinput == 3)
	{
		std::cout << "Enter sideA";
		std::cin >> sideA;

		std::cout << "Enter sideC";
		std::cin >> sideC;
	
		
		sideB = sqrt((sideA * sideA) + (sideC * sideC));
		std::cout << " The three side of Right  triangle is  " << sideB;
	}
	else if (Sinput == 1)
	{
		std::cout << "Enter sideB";
		std::cin >> sideB;

		std::cout << "Enter sideC";
		std::cin >> sideC;

		sideA = sqrt((sideB * sideB) + (sideC * sideC));
		std::cout << " The three side of Right  triangle is  " << sideA;
	}
}


if (tinput == 2)
{
	std::cout << "  Enter the missing  side of Isosceles Triangle  1 = SideA , 2 = SideB , 3 = SideC  ";
	std::cin >> Sinput;
	if (Sinput == 1)
	{

		std::cout << "Enter sideB";
		std::cin >> sideB;

		std::cout << "Enter sideC";
		std::cin >> sideC;

		sideA = sqrt((sideB * sideB) + (sideC * sideC));
		std::cout << " The three side of Isosceles triangle is  " << sideA;
	}
	else if (Sinput == 2)
	{

		std::cout << "Enter sideA";
		std::cin >> sideA;

		std::cout << "Enter sideC";
		std::cin >> sideC;

		sideB = sqrt((sideA * sideA) + (sideC * sideC));
		std::cout << " The three side of Isosceles triangle is  " << sideB;
	}
	else if (Sinput == 3)
	{

		std::cout << "Enter sideB";
		std::cin >> sideB;

		std::cout << "Enter sideA";
		std::cin >> sideA;

		sideC = sqrt((sideA * sideA) + (sideB * sideB));
		std::cout << " The three side of Isosceles triangle is  " << sideC;
	}
}




	 if (tinput == 3)
	{
		std::cout << "  Enter the   missing    side of Equilateral  Triangle  1 = SideA , 2 = SideB , 3 = SideC  ";
		std::cin >> Sinput;

		if (sideA == 1)
		{

			std::cout << "Enter sideB";
			std::cin >> sideB;

			std::cout << "Enter sideC";
			std::cin >> sideC;

			sideA = sqrt(3) / 4 * sideB * sideC; 
			std::cout << " The three side of Equilateral  triangle is  " << sideC;
		}
		if (sideB == 2)
		{

			std::cout << "Enter sideA";
			std::cin >> sideA;

			std::cout << "Enter sideC";
			std::cin >> sideC;
			sideB = sqrt(3) / 4 * sideA * sideC;
			std::cout << " The three side of Equilateral triangle is  " << sideB;
		}
		if (sideC == 3)
		{

			std::cout << "Enter sideB";
			std::cin >> sideB;

			std::cout << "Enter sideA";
			std::cin >> sideA; 

			sideC= sqrt(3) / 4 * sideA * sideB;
			std::cout << " The three side of Equilateral triangle is  " << sideB;
		}
	}



}