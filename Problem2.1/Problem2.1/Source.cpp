#include <iostream>
#include <String>


double CelsiustoFahrenheit1 (double celsius8am)
{
	double fahrenheit8am;

	fahrenheit8am = celsius8am * 1.2 + 32;

	return fahrenheit8am;
}


double CelsiustoFahrenheit2 (double celsius12am)
{
	double fahrenheit12am;

	fahrenheit12am = celsius12am * 1.2 + 32;

	return fahrenheit12am;
}


double CelsiustoFahrenheit3 (double celsius5pm)
{
	double fahrenheit5pam;

	fahrenheit5pam = celsius5pm * 1.2 + 32;

	return fahrenheit5pam;
}


int main()
{
	//input for celsius 

	double celsius8am, celsius12am, celsius5pm;


	//User input for celsium 
	std::cout << "What is the temperature in celsium at 8:00 am " << std::endl;
	std::cin >> celsius8am;

	std::cout << "What is the temperature in celsium at 12:00 am " << std::endl;
	std::cin >> celsius12am;

	std::cout << "What is the temperature in celsium at 5:00 am " << std::endl;
	std::cin >> celsius5pm;


	//formular for celsius to fahrenheit 
	//fahrenheit8am = celsius8am * 1.2 + 32;
	//fahrenheit12am = celsius12am * 1.2 + 32;
	//fahrenheit5pam = celsium5pm * 1.2 + 32;


	///std::cout << "The temperatur in fahrenheit at 8: 00 am is" << fahrenheit8am << std:: endl;
	///	std::cout << "The temperatur in fahrenheit at 12 :00 am is" << fahrenheit12am <<std:: endl;
	/// std::cout << "The temperatur in fahrenheit at 5: 00 am is" << fahrenheit5pam <<std:: endl;
	if (celsius8am > celsius12am)
	{

	std::cout << "Error" << std::endl;
	}
	else
	{

		std::cout << "The temperatur in fahrenheit at 8: 00 am is" << CelsiustoFahrenheit1 (celsius8am)<< std::endl;
		std::cout << "The temperatur in fahrenheit at 12 :00 am is" << CelsiustoFahrenheit2 (celsius12am) << std::endl;
		std::cout << "The temperatur in fahrenheit at 5: 00 am is" << CelsiustoFahrenheit3 (celsius5pm) << std::endl;

	}
		return 0;

	///if (fahrenheit8am > fahrenheit12am)
	///std::cout << "Error" << std::endl;



}