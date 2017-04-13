#include <iostream>
#include <string>
using namespace std;
int main()
{
	string  RoomService, choice, phone;
	int nightStay, phoneMin;

	float  roomServicePrice = 35.00, phoneChargeMin = .25, nightCost = 100.00, TotalNightStay, TotalRoomService, TotalPhone, Total;

	std::cout << "Welcome to Lake Hotel" << std::endl;
	std::cout << "Would you like to stay at our hotel ? Yes or NO " << std::endl;
	std::cin >> choice;

	while (choice == "Yes")
	{
		std::cout << " How many night would you like to stay" << std::endl;
		std::cin >> nightStay;


		std::cout << " Would you like to use roomsrvice ? Yes or No";
		std::cin >> RoomService;


		std::cout << " Would you use phone in the room ?  Yes or No ";
		std::cin >> phone;

		TotalNightStay = nightStay * nightCost;
		TotalRoomService = RoomService * roomServicePrice;
		TotalPhone = phone * phoneChargeMin;

		Total = TotalNightStay + TotalRoomService + TotalPhone;

		std::cout << " Your total bill is $ " << Total << std::endl;


		if (choice == "NO")
		{

			std::cout << "HAve a Good day" << std::endl;
		}
		return 0;
	}

}
