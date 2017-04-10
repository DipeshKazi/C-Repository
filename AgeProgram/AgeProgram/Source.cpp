#include<iostream>
#include<string>

int main()
{
	int age;
	std::cout << "Enter your Age.";
	std::cin >> age;

	if (age <=11)
		std::cout << "Your 10 or less " << std::endl;
	else if (age <= 12 && age < 18)
		std::cout << " You are less than 18 but older than 12 " << std::endl;
	else if (age >= 18 && age <= 30)
		std::cout << "Still in your 20's enjoy it";
	else if (age > 30 && age <= 40)
		std::cout << "Not much else to look forward ";
	else if (age > 40 && age <= 50)
		std::cout << "Travel the world and Enjoy ";
	else if (age > 50 && age <= 70)
		std::cout << " You have live our life , Enjoy";
	system("pause"); 
	return 0;
}