#include <iostream> 
#include <string>

int main()
{
	const int GOLD_PRICES = 900; 
	int adventure, killed, survivors,boat; 
	std::string leader,years; 
	

	//get info 
	std::cout << "Welcome to lost Fortune" << std::endl; 
	std::cout << "Please enter the following for your personalized adventure " << std::endl;

	std::cout << "Enter the number of Adventures in your party : "; 
	std::cin >> adventure; 

	std::cout << "Rnter a number , smaller than the first"; 
	std::cin >> killed; 

	survivors = adventure - killed; 

	std::cout << "Enter your last name:"; 
std::cin >> leader; 

std::cout << "Enter a noun"; 
std::cin >> boat;
	//story 
std::cout << "\nA brave group of " << adventure << "set out on a quest" << std::endl; 
std::cout << "-- in search of the lost treasure of the ancient Dwarves." << std::endl;
std::cout << "The group was led by the legendary Paladin " << leader << std::endl; 

std::cout << "\nAlong the way, a band of marauding orges ambushed the party" << std::endl; 
std::cout << "All fougth bravely under the commond of " << leader << std::endl;
std::cout << " and the orges were defeated, but at a cost  " << std::endl;
std::cout << "Of the adventures," << killed << "were vanquished," << std::endl; 

std::cout << "leaving jsut " << survivors << " in the group.\n" << std::endl; 
std::cout << "\nThe Party was about to give up all hope." << std::endl; 
std::cout << "But while laying the deceased to rest," << std::endl;
std::cout << "they stumcled upon the buried fortune." << std::endl;
std::cout << "So the adventures split" << GOLD_PRICES << "gold pieces" << std::endl;
std::cout << leader << "held on to the extra" << (GOLD_PRICES % survivors) << std::endl;
std::cout << "pieces to keep things fair of course.\n"; 
std::cout << "The leader" << leader << "left on the great boat" << boat << std::endl; 
std::cout << "And was not seen for " << years << "years." << std::endl;
}