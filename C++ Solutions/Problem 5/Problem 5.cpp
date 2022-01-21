#include <iostream>

// Smallest multiple
int main()
{
	auto found = false;
	auto n = 19;
	do {
		n++;
		auto m = 2;
		auto divisibleInAllRange = true;
		while (m <= 20 && divisibleInAllRange) {
			divisibleInAllRange = n % m == 0;
			m++;
		}
		found = divisibleInAllRange;
	} while (!found);
	std::cout << n;
}