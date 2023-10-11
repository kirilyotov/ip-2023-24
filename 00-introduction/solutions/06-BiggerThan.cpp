#include <iostream>

int main()
{
	int x;
	int y;

	std::cin >> x >> y;

	if (x > y)
		std::cout << "x is bigger than y";
	else
		std::cout << "y is bigger than x";

	return 0;
}
