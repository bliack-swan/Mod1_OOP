#include <iostream>
#include <vector>
#include <algorithm>
class Parent {
private:
	int m_age;
	std::string m_name;
public:
	Parent(int age, std::string name) {
		m_age = age;
		m_name = name;
		std::cout << "Person " << m_name << ", " << m_age << " created";
	}
};
int main() {
	std::vector<double> numbers;
	double number = 1;
	while (number) {
		std::cout << "Write the next number (0 - end): ";
		std::cin >> number;
		numbers.push_back(number);
	}
	sort(numbers.rbegin(), numbers.rend());
	std::cout << "Max of numbers: " << numbers[0];
}