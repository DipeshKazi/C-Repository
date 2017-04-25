#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(0)); 

	int num1 = 0; 
	int num2 = 0; 
	int correctAnswer = 0; 
	int userAnswer = 0;

	///srand(static_cast<int>(time(0)));

	for (int x = 1; x = 6; x += 1)
	{
		num1 = 1 + rand() % (10 + 1); 
		num2 = 1 + rand() % (10 + 1);
        
		correctAnswer = num1 + num2; 

		std::cout << "What is the sum of" << num1 << " + " << num2 << correctAnswer;
    
	std::cin >> userAnswer;

	if (userAnswer == correctAnswer)
		std::cout << "Correct";

	else
		std::cout << " Sorry , the correct answer is " << correctAnswer << std::endl;
	}
	system("pause");
	return 0;
}