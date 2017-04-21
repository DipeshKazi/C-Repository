#include <iostream>
#include <string>
int main()
{
	unsigned long studentComputerNumber; 
	std::string done;
	do {
	std::cout << "Plase scane your computer";
	std::cin >> studentComputerNumber; 
	

	
		switch (studentComputerNumber)
		{
		case 99732:
			std::cout << "Dusty's computer";
			break;
		case 99720:
			std::cout << "hannah computer";
			break;
		case 99724:
			std::cout << "Kayla  computer";
			break;
		case 99718:
			std::cout << " Zach computer";
			break;
		case 99727:
			std::cout << "Chase computer";
			break;
		case 99733:
			std::cout << "chance computer";
			break;
		case 99715:
			std::cout << " Gleen computer";
			break;
		case 99735:
			std::cout << "Trey computer";
			break;
		case 99721:
			std::cout << "Gaireen computer";
			break;
		case 99738:
			std::cout << "Dipesh computer";
			break;
		case 99717:
			std::cout << " Andrew computer";
			break;
		default:
			std::cout << "Invaild computer";}

		std::cout << "Would you like to  scan again";
		std::cin >> done;

	} while (done =="yes");
}