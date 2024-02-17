#include <iostream>
#include <vector>

bool isPrime(std::vector<int> primes, int const n) {
	// Assumes *pLast < n <= *pNext
	const auto nSqrt = std::sqrt(n);
	auto p = primes.begin();
	auto isPrime = true;
	while (isPrime && *p <= nSqrt && p != primes.end()) {
		isPrime = (n % *p) != 0;
		p = std::next(p);
	}
	return isPrime;
}

int main()
{
	auto primes = std::vector<int>{ 2 };
	std::cout << 2;
	auto i = 3;
	while (primes.size() < 10001) {
		if (isPrime(primes, i)) {
			std::cout << ", " << i << "";
			primes.push_back(i);
		}
		i++;
	}
	std::cout << std::endl;
}