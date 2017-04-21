#include <iostream>

int main() {
	//enter grade 
	char grade = ' ';
	std::cout << "Enter a letter grade"; 
	std::cin >> grade;

	grade = toupper(grade); 

	switch (grade)
	{
	case 'A': 
		std::cout << "Exxecllent"; 
		break;
	case 'B': 
		std::cout << "Aboout average"; 
		break;
	case 'C': 
		std::cout << "Average"; 
		break;
	case'D':
	case'F':
		std::cout << "Belove average";
		break; 
	default:
		std::cout << "Invalid grade/n";
	}
	system("pause");
	return 0;
}