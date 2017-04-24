#include <iostream>

int addition(int a, int b)
{
	int r; 
	r = a + b; 
	return r;

}
int main() {
	int z, enterNum1, enterNum2; 

	std::cout << "Please enter your frist number <<";
	std::cin >> enterNum1; 

	std::cout << "Please enter your second number"; 
	std::cin >> enterNum2; 

	z = addition(enterNum1, enterNum2); 
	std::cout << "The result is " << z; 
	 
	system("pause");
}