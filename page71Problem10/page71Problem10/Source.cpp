#include<iostream>
#include<string>

int main()
{
	
	double tax, totaltaxMS, total , totalpay;
	double weeklygross, federal = 13.66, state = 2.00,netFWT =100, medicare = 1.245, Socialsecurity = 6.2;
	std::cout << " How much was your weekly gross pay " << std::endl;
	std::cin >> weeklygross; 

	weeklygross = federal - state; 

	tax = medicare - Socialsecurity; 
	totaltaxMS = 100 - tax; 
	total = netFWT + weeklygross;

	totalpay = total / totaltaxMS; 

	std::cout << "Your total weekly gross pay is $ " << totalpay << std::endl;
}