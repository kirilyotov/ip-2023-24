#include <iostream>

int main()
{
	int x;
	int y;

	std::cin >> x >> y;

	if (x > y)
		std::cout << "x is bigger than y";
	else if (y > x)
		std::cout << "y is bigger than x";
	else
		std::cout << "x is equal to y";

	return 0;
}
