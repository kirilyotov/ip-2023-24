#include <iostream>

int main()
{
	float grade;

	std::cin >> grade;

	if (grade < 3)
		std::cout << "Poor";
	else if (grade < 3.5)
		std::cout << "Satisfactory";
	else if (grade < 4.5)
		std::cout << "Good";
	else if (grade < 5.5)
		std::cout << "Very Good";
	else if (grade <= 6)
		std::cout << "Excellent";
	else
		std::cout << "Waaaay better than I could've imagined!";

	return 0;
}
