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
	for (; min < max; min++)
	{
		sum += min;
	}
	std::cout << sum;

    // NOTE: Always prefer mathematics over bruteforce loops!
    // A math solution will look like this:
    //int sum = (max - min + 1)*(max + min)/2;
        
	return 0;
}