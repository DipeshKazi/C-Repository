#include <iostream>
#include <iomanip>


int addition[] = { 1, 2, 3 , 4, 5 };
int n, result = 0;

int addition2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
int r, result2 = 0;

int main() {
	int x[] = { 1 };
	int y[] = { 2 };
	int z[] = { 3 };
	std::cout << x[0] << std::endl;
	std::cout << x[0] << std::endl;
	std::cout << x[0] << std::endl;


	for (n = 0; n < 5; ++n)
	{
		result = addition[n] + result; 
	}
	std::cout << result << std::endl;

	for (r = 0; r < 10; ++r)
	{
		result2 = addition2[r] + result2;
	}
	std::cout << result2 << std::endl;

	system("pause");
	return 0;

}