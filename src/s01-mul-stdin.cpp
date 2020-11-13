#include <iostream>

auto main() -> int
{
	int a;
	int b;
	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;
	std::cout << (a * b) << "\n";
	return 0;
}
