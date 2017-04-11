//Delgados Tacos 
//Dipesh 
// 3/30/17 

#include <iostream>
#include <String>

int main()
{
	int tacosYes = 1, tacosNo = 2, taco = 1, burrito = 2, drink = 3, prokTaco = 4, fries = 5, lavaBurrito = 6, tacoburger = 7, salad = 8, firetaco = 9, firefries = 10;
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
	int oderInput;

	const double taxRate = 1.075; 

	double tacoOrdered, burritoOrdered, drinkOrdered, prokTacoOrdered, friesOrdered, lavaBurritoOrdered, tacoburgerOdered, saladOrdered, fireTacoOdered, firefriesOdered, total, totalWithTax;
	////double tacoTotal, burritoTotal, drinkTotal, prokTacoTotal, lavaBurritoTotal, friesTotal, tacoburgerTotal, saladTotal, fireTacoTotal, firefriesTotal;
	
	double Total1, Total2, Total3, Total4, Total5, Total6, Total7, Total8, Total9, Total10;
	double totalWithTax1, totalWithTax2, totalWithTax3, totalWithTax4, totalWithTax5, totalWithTax6, totalWithTax7, totalWithTax8, totalWithTax9, totalWithTax10;
	
	std::cout << "Welcome to Delgados Tacos, *******BEST TACO********\n" << std::endl;
	std::cout << " Delgados taco have wide range of food,\n" << std::endl;
	std::cout << " Press  1 to eat , Press 2 for no " << std::endl; ;
	             std::cin >> tacosYes; 

if (tacosYes == 1)
{
	std::cout << " Nice choices to eat at Delgados Tacos\n";
	std::cout << " Delgados Tacos Menu \n";
	std:: cout << " 1 for Taco , 2 for Burrito , 3 for Drink , 4 for ProkTaco , 5 for Fries , 6 for LavaBurrito, 7 for TacoBurger, 8 for salad, 9 for FireTaco, 10 for FireFries";
	std::cin >> oderInput;

	if (oderInput == 1)
	{
		std::cout << "How many Taco's do you want" << std::endl;
		std::cin >> tacoOrdered;

		Total1 = tacoOrdered * tacoPrice;
		totalWithTax1 = Total1  * taxRate;
		std::cout << " You total for  Taco is $ " << totalWithTax1 << std::endl;
	}
	else if (oderInput == 2)
	{
		std::cout << "How many Burrito do you want " << std::endl;
		std::cin >> burritoOrdered;

		Total2 = burritoOrdered * burritoPrice;
		totalWithTax2 = Total2 * taxRate;
		std::cout << " You total for  Burrito is $ " << totalWithTax2 << std::endl;
	}
	else if (oderInput == 3)
	{
		std::cout << "How many drink do you want" << std::endl;
		std::cin >> drinkOrdered;

		Total3 = drinkOrdered * drinkPrice;
		totalWithTax3 = Total3 * taxRate;
		std::cout << " You total for Drink is $ " << totalWithTax3 << std::endl;
	}
	else if (oderInput == 4)
	{
		std::cout << "How many PorkTaco do you want" << std::endl;
		std::cin >> prokTacoOrdered;

		Total4 = prokTacoOrdered * prokTacoPrice;
		totalWithTax4 = Total4 * taxRate;
		std::cout << " You total for ProkTaco is $ " << totalWithTax4 << std::endl;
	}
	else if (oderInput == 5)
	{
		std::cout << "How many fries do you want" << std::endl;
		std::cin >> friesOrdered;

		Total5 = friesOrdered * friesPrice;
		totalWithTax5 = Total5 * taxRate;
		std::cout << " You total for Fries is $ " << totalWithTax5 << std::endl;
	}
	else if (oderInput == 6)
	{
		std::cout << "How many lavaBurrito do you want" << std::endl;
		std::cin >> lavaBurritoOrdered;

		Total6 = lavaBurritoOrdered * lavaBurritoPrice;
		totalWithTax6 = Total6 * taxRate;
		std::cout << " You total for lavaBurrito is $ " << totalWithTax6 << std::endl;
	}
	else if (oderInput == 7)
	{
		std::cout << "How many TacoBurger do you want" << std::endl;
		std::cin >> tacoburgerOdered;

		Total7 = tacoburgerOdered * tacoburgerPrice;
		totalWithTax7 = Total7 * taxRate;
		std::cout << " You total for TacoBurger is $ " << totalWithTax7 << std::endl;
	}
	else if (oderInput == 8)
	{

		std::cout << "How many salad do you want" << std::endl;
		std::cin >> saladOrdered;

		Total8 = saladOrdered * saladPrice;
		totalWithTax8 = Total8 * taxRate;
		std::cout << " You total for Salad is $ " << totalWithTax8 << std::endl;
	}
	else if (oderInput == 9)
	{
		std::cout << "How many FireTaco do you want" << std::endl;
		std::cin >> fireTacoOdered;

		Total9 = fireTacoOdered * fireTacoPrice;
		totalWithTax9 = Total9 * taxRate;
		std::cout << " You total for FireTaco is $ " << totalWithTax9 << std::endl;
	}
	else if (oderInput == 10)
	{
		std::cout << "How many Fire Fries do you want" << std::endl;
		std::cin >> firefriesOdered;

		Total10 = firefriesOdered * firefriesPrice;
		totalWithTax10 = Total10 * taxRate;
		std::cout << " You total for Fire Fries is $ " << totalWithTax10 << std::endl;
	}
}

else if (tacosNo == 2)
std::cout << " Sorry to hear that Please Leave";
system("pause");
return 0;
}