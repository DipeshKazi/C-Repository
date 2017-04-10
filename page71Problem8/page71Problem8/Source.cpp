#include<iostream>
#include<string>
using namespace std;
int main()
{
	double savingaccount, bonusCheck, startingBalance;



	cout << "Please enter the starting balance in saving account" << endl;
	cin >> startingBalance;

	cout << " Please enter the amount you want to deposists from bonus Check " << endl;
	cin >> bonusCheck;

	savingaccount = startingBalance + bonusCheck;

	std::cout << "Your total amount for this year is $" << savingaccount << std::endl;
}