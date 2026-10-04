#include <iostream>

int value = 10;

namespace First {
int value = 20;
}

namespace Second {
int value = 30;
}

int main() {
	int value = 5;

	std::cout << "Local variable: " << value << '\n';
	std::cout << "Global variable: " << ::value << '\n';
	std::cout << "First namespace variable: " << First::value << '\n';
	std::cout << "Second namespace variable: " << Second::value << '\n';

	return 0;
}
