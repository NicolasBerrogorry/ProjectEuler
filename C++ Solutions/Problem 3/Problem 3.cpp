#include <iostream>
#include <memory>
#include <set>

bool isPrime(int n) {
	// n is not prime if there is a number m such that n is divisible by m where 2 < m < sqrt(n)
	bool isPrime = true;
	auto m = 2;
	while (m < std::sqrt(n) && isPrime) {
		if (n % m == 0) {
			isPrime = false;
		}
		m++;
	}
	return isPrime;
}

int nextPrime(int n) {
	// Get the next prime by checking the next odd numbers
	do {
		n += 2;
	} while (!isPrime(n));
	return n;
}

// Largest prime factor
int main()
{
	// Factor tree method
	auto n = 600851475143;
	auto m = 3; // Start at the smallest prime
	while (m < n) {
		// Divide n by m untill n is no longer divisible by m
		while (n % m == 0) {
			n = n / m;
		}

		// Proceed to the next prime
		m = nextPrime(m);
	}
	std::cout << m;
}