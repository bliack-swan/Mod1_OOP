#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	std::vector<double> numbers;
	double number = 1;
	while (number) {
		std::cout << "Write the next number (0 - end): ";
		std::cin >> number;
		numbers.push_back(number);
	}
	
}