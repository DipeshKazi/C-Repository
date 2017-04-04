#include <iostream>
#include <string> 

int main() 
{
	std::cout << "Welcome to Middle Earth " << std::endl;
	std::string color, animal, BodyPart, noun, Pluralnoun, wordendinginest; 
	 

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

	std::cout << " The " << color << "Dargon is the " << wordendinginest << " dargon of all." << std::endl;
	std::cout << "It has " << BodyPart << "and a " << animal << "shaped like a " << noun << std::endl; 
	std::cout << "it loves to eat" << Pluralnoun << ", although it will feast on nearly anything" << std::endl;



	

}