#include <iostream>

int main()
{
	for (auto a = 1; a < 998; a++) {
		for (auto b = 1; b < 998; b++) {
			for (auto c = 1; c < 998; c++) {
				if (a + b + c == 1000 && a * a + b * b == c * c) {
					std::cout << a * b * c << std::endl;
				}
			}
		}
	}
}