//Concert Hall 
//Dipesh 
//3/31/2017

#include <iostream>
#include <String>

int main()
{
	double orchestraSeatsPrice = 25; 
	double mainFloorSeatsPrice = 30;
	double balconySeatsPrice = 15; 

	double orchestraSeatsTickets, mainFloorSeatsTickets, balconySeatsTickets, total; 
	double orchestraSeatsTotal, mainFloorSeatsTotal, balconySeatsTotal;

	std::cout << "Welcome to Bernabeu Hall " << std::endl;

	std::cout << "How many Orchestra Seats Tickets do you want" << std::endl;
	std::cin >> orchestraSeatsTickets; 

	std::cout << "How many Main Seats Tickets do you want" << std::endl;
	std::cin >> mainFloorSeatsTickets;

	std::cout << "How many Balcony Seats Tickets do you want" << std::endl;
	std::cin >> balconySeatsTickets; 

	orchestraSeatsTotal = orchestraSeatsTickets * orchestraSeatsPrice; 
	mainFloorSeatsTotal = mainFloorSeatsTickets * mainFloorSeatsPrice; 
	balconySeatsTotal = balconySeatsTickets * balconySeatsPrice; 

	total = orchestraSeatsTotal + mainFloorSeatsTotal + balconySeatsTotal;

	std::cout << "Your total tickets for Orchestra Seats $ " << orchestraSeatsTotal << std::endl;
	std::cout << "Your total tickets for Main Floor Seats $ " << mainFloorSeatsTotal<< std::endl;
	std::cout << "Your total tickets for balcony  Seats $ " << balconySeatsTotal << std::endl;

	std::cout << "Your total tickets for Bernabeu Hall $ " << total << std::endl;






}