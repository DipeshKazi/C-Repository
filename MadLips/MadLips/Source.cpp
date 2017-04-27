#include <iostream>
#include <string> 

int main() 
{
	std::cout << "Welcome to Middle Earth " << std::endl;
	std::string color, animal, BodyPart, noun, Pluralnoun, wordendinginest; 
	int number;


	std::cout << "Enter a number between 1 to 20" << std::endl;
	std::cin >> number; 

	std::cout << "Enter the color for dargon. " << std::endl;
	std::cin >> color; 

	std::cout << "Enter a word ending est ." << std::endl; 
	std::cin >> wordendinginest; 

	std::cout << "Enter a body part " << std::endl;
	std::cin >> BodyPart; 

	std:: cout << "Enter a animal" << std::endl; 
	std::cin >> animal; 

	std::cout << "Enter a noun" << std::endl; 
	std::cin >> noun;

	std::cout << "Enter a plural noun " << std::endl;
	std::cin >> Pluralnoun; 



	if (number < (1) || number >(20)) 
	{
		std::cout << " The number need to be between 1 and 20 " << std::endl;
		std::cin >> number;
	}


	std::cout << number << " Dargon live in the Gold Mountain. " << std::endl;
	std::cout << " The " << color << "Dargon is the " << wordendinginest << " dargon of all." << std::endl;
	std::cout << "It has " << BodyPart << "and a " << animal << "shaped like a " << noun << std::endl; 
	std::cout << "it loves to eat" << Pluralnoun << ", although it will feast on nearly anything" << std::endl;

	system("pause");
}

