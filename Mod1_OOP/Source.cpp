#include <iostream>
#include <vector>
#include <algorithm>
class Parent {
protected:
	int m_age;
	std::string m_name;
public:
	Parent(int age, std::string name) {
		m_age = age;
		m_name = name;
		std::cout << "Person " << m_name << ", " << m_age << "was created";
	}
	Parent(std::string name) : Parent(18, name) {}
	Parent(): Parent("Bob"){}
	~Parent() {
		std::cout << "Parent was destroyed";
	}
};
class Child : public Parent{
private:
	std::string m_class; 
public:
	Child(std::string s_class, int age, std::string name) : Parent(age,name)
	{
		m_class = s_class;
		std::cout << "Child " << m_name << ", " << m_age <<", "<<m_class << "was created";
	}
	~Child() {
		std::cout << "Child was destroyed";
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