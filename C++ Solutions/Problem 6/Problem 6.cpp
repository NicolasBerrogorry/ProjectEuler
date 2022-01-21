#include <iostream>

int sum(int n) {
	return n * (n + 1) / 2;
}

int sumOfSquares(int n) {
	return n * (n + 1) * (2 * n + 1) / 6;
}

// Sum square difference
int main()
{
	auto n = 100;
	auto nSum = sum(n);
	auto squareSumDifference = nSum * nSum - sumOfSquares(n);
	std::cout << squareSumDifference;
}