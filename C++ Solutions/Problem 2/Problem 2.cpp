#include <iostream>

// Even Fibonacci numbers
int main()
{
	auto n = 0;
	auto m = 1;
	auto evenSum = 0;
	while (m < 4000000) {
		if (m % 2 == 0) {
			evenSum += m;
		}
		auto mNext = m + n;
		n = m;
		m = mNext;
	}
	std::cout << evenSum;
}