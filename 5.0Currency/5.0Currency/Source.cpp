#include <iostream>
#include <String>

int main() {
	int AmericanDollars = 0, value = 0;
	double rate = 0; 

	int  BritishPoundstotal, MexicanPesostotal, Japaneseyentotal , CandainDollartotal, Eurototal, IndainRupeetotal, SouthAfricatotal;

	const double Britishpounds = .6178, Mexicanpeso = 13.1544, JapaneseYen = 80.92, CandaianDollar = .9813, Euro = .757, IndainRupee = 52.53, SouthAfricaRand = 7.7522;

	std::cout << " How much US dollar you want to converts to Pounds , Pesos , Yen , Canadain Dollar , Euro , Indain Rupee , South African Rand" << std::endl;
	std::cin >> AmericanDollars;

	BritishPoundstotal = AmericanDollars * Britishpounds;
	MexicanPesostotal = AmericanDollars * Mexicanpeso;
	Japaneseyentotal = AmericanDollars * JapaneseYen;
	CandainDollartotal = AmericanDollars * CandaianDollar; 
	Eurototal = AmericanDollars * Euro; 
	IndainRupeetotal = AmericanDollars * IndainRupee; 
	SouthAfricatotal = AmericanDollars * SouthAfricaRand; 

	std::cout << "Your total for Pound is " << BritishPoundstotal << std::endl;
	std::cout << "Your total for Pesos is " << MexicanPesostotal << std::endl;
	std::cout << "Your total for Yan is " << Japaneseyentotal << std::endl;
	std::cout << "Your total for Chanadain Dollar is " << CandainDollartotal << std::endl;
	std::cout << "Your total for Euro is " << Eurototal << std::endl;
	std::cout << "Your total for Indain Rupee is " << IndainRupeetotal << std::endl;
	std::cout << "Your total for South African Rand is " << SouthAfricatotal	 << std::endl;


}