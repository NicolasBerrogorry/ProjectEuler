
#include <iostream>
#include <vector>


bool isPrime(std::vector<long long> primes, long long const n) {
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
	auto primes = std::vector<long long>{ 2 };
	long long sum = 2;
	long long i = 3;
	while (i < 2E+6) {
		if (i % 100 == 0) {
			system("CLS");
			std::cout << 100 * i / 2E+6 << "%" << std::endl;
		}
		if (isPrime(primes, i)) {
			sum += i;
			primes.push_back(i);
		}
		i++;
	}

	std::cout << sum << std::endl;
}