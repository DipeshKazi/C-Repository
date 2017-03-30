//Delgados Tacos 
//Dipesh 
// 3/30/17 

#include <iostream>
#include <String>
int main()
{
	double tacoPrice = 0.99; 
	double burritoPrice = 1.99; 
	double drinkPrice = 1.50;
	double prokTacoPrice = 2.01; 
	double friesPrice = 1.25; 
	double lavaBurritoPrice = 3.00; 
	double tacoburgerPrice = 1.45;
	double saladPrice = 1.00; 
	double fireTacoPrice = 1.02;
	double firefriesPrice = 1.00;
	

	const double taxRate = 1.075; 

	double tacoOrdered, burritoOrdered, drinkOrdered, prokTacoOrdered, friesOrdered, lavaBurritoOrdered, tacoburgerOdered, saladOrdered, fireTacoOdered, firefriesOdered, total, totalWithTax;
	double tacoTotal, burritoTotal, drinkTotal, prokTacoTotal, lavaBurritoTotal, friesTotal, tacoburgerTotal, saladTotal, fireTacoTotal, firefriesTotal;
	

	std::cout << "Welcome to Delgados Tacos, Place of Barcelona FC" << std::endl;

	std::cout << "How many Taco's do you want" << std::endl;
	std::cin >> tacoOrdered;

	std::cout << "How many Burrito do you want " << std::endl; 
	std::cin >> burritoOrdered; 

	std::cout << "How many drink do you want" << std::endl; 
	std::cin >> drinkOrdered; 

	std::cout << "How many PorkTaco do you want" << std::endl;
	std::cin >> prokTacoOrdered;

	std::cout << "How many fries do you want" << std::endl;
	std::cin >> friesOrdered;

	std::cout << "How many lavaBurrito do you want" << std::endl;
	std::cin >> lavaBurritoOrdered;
	
	std::cout << "How many TacoBurger do you want" << std::endl;
	std::cin >> tacoburgerOdered;

	std::cout << "How many salad do you want" << std::endl;
	std::cin >> saladOrdered;

	std::cout << "How many FireTaco do you want" << std::endl;
	std::cin >> fireTacoOdered;

	std::cout << "How many Firefries do you want" << std::endl;
	std::cin >> firefriesOdered;

	tacoTotal = tacoOrdered * tacoPrice; 
	burritoTotal = burritoOrdered * burritoPrice;
	drinkTotal = drinkOrdered * drinkPrice; 
	prokTacoTotal = prokTacoOrdered * prokTacoPrice;
	friesTotal = friesOrdered * friesPrice; 
	lavaBurritoTotal = lavaBurritoOrdered * lavaBurritoPrice;
	tacoburgerTotal = tacoburgerOdered * tacoburgerPrice;
	saladTotal = saladOrdered * saladPrice;
	firefriesTotal = firefriesOdered * firefriesPrice;
	fireTacoTotal = fireTacoOdered * fireTacoPrice;
	

	total = tacoTotal + burritoTotal + drinkTotal + prokTacoTotal + lavaBurritoTotal + friesTotal + tacoburgerTotal + saladTotal + firefriesTotal + fireTacoTotal* taxRate; 
	totalWithTax = total + taxRate;
	
	std::cout << "Your total for all items entered is $ "<< totalWithTax  << std::endl;
}