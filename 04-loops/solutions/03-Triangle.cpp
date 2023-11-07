#include <iostream>
#include <cmath>

int main() {
	int N;
	std::cin >> N;

	for (int row = 1; row <= N; row++) {
		int final = (row * (row + 1)) / 2;
		int first = final - row + 1;

		for (; first <= final; first++) {
			std::cout << first << " ";
		}

		std::cout << "\n";
	}
}