#include <iostream>
#include <iomanip>



int main() {

	//Declare Array
	double sales[4] = { 0.0 };
	

	//Store data in the array
	for (int sub = 0; sub < 4; sub += 1)
	{
		std::cout << "Enter the sales for Region"; 
		std::cout << sub + 1 << " :"; 
		std::cin >> sales[sub];
	}

	//Display the contents of the array
	std::cout << std::fixed << std::setprecision(2) << std::endl;
	for (int sub = 0; sub < 4; sub += 1)
	{
		std::cout << "Sales for Region" << sub + 1 << ": $";
		std::cout << sales[sub] << std::endl;
	}

	double  result = 0;
	for (int n   = 0;  n < 4;  ++n){
		result = sales[n] + result;
	}

	std::cout << "Total for all for region " << result << std::endl;
	system("pause"); 
	return 0;
}