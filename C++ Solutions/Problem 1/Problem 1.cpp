#include <iostream>

// Multiples of 3 or 5
int main()
{
	auto sum = 0;
	for (auto i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	std::cout << sum;
}