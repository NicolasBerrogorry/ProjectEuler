#include <iostream>
#include <memory>
#include <string>

bool isPalindrome(int n) {
	auto str = std::to_string(n);
	auto left = std::cbegin(str);
	auto right = std::crbegin(str);
	auto isPalindrome = true;
	while (isPalindrome && left != right.base()) {
		if (*left != *right) {
			isPalindrome = false;
		}
		left++;
		right++;
	}
	return isPalindrome;
}

// Largest palindrome product
int main()
{
	auto largestPalindrome = 0;
	for (auto i = 999; i > 99; i--) {
		for (auto j = 999; j > 99; j--) {
			auto product = i * j;
			if (product > largestPalindrome && isPalindrome(product)) {
				largestPalindrome = product;
			}
		}
	}
	std::cout << largestPalindrome;
}