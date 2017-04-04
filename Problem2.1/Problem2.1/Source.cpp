#include <iostream>
#include <String>

int main()
{
	//input for celsius 

	double celsius8am, celsius12am, celsium5pm, fahrenheit8am, fahrenheit12am, fahrenheit5pam;


	//User input for celsium 
	std::cout << "What is the temperature in celsium at 8:00 am " << std::endl;
	std::cin >> celsius8am;

	std::cout << "What is the temperature in celsium at 12:00 am " << std::endl;
	std::cin >> celsius12am;

	std::cout << "What is the temperature in celsium at 5:00 am " << std::endl;
	std::cin >> celsium5pm;


	//formular for celsius to fahrenheit 
	fahrenheit8am = celsius8am * 1.2 + 32;
	fahrenheit12am = celsius12am * 1.2 + 32;
	fahrenheit5pam = celsium5pm * 1.2 + 32;


	///std::cout << "The temperatur in fahrenheit at 8: 00 am is" << fahrenheit8am << std:: endl;
	///	std::cout << "The temperatur in fahrenheit at 12 :00 am is" << fahrenheit12am <<std:: endl;
	/// std::cout << "The temperatur in fahrenheit at 5: 00 am is" << fahrenheit5pam <<std:: endl;
	if (fahrenheit8am > fahrenheit12am)
		std::cout << "Error" << std::endl;
	else
		 std::cout << "The temperatur in fahrenheit at 8: 00 am is" << fahrenheit8am << std::endl;
	std::cout << "The temperatur in fahrenheit at 12 :00 am is" << fahrenheit12am <<std:: endl;
	std::cout << "The temperatur in fahrenheit at 5: 00 am is" << fahrenheit5pam <<std:: endl;


		return 0;

	///if (fahrenheit8am > fahrenheit12am)
	///std::cout << "Error" << std::endl;



}