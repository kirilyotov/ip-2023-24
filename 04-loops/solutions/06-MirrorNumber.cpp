#include <iostream>
int main() {
	unsigned int num, result = 0;
	std::cin >> num;
	while (num > 0) {
		//std::cout << num % 10;
		result *= 10;
		result += num % 10;
	}
	std::cout << result;
	return 0;
}