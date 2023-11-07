#include <iostream>
int main() {
	int N, M;
	std::cin >> N >> M;
	int max, min;
	max = N;
	min = M;
	if (N < M) {
		min = N;
		max = M;
	}
	int sum = 0;
	for (min; min < max; min++)
	{
		sum += min;
	}
	std::cout << sum;
	return 0;
}