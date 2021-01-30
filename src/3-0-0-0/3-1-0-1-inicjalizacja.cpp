#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt.empty()) {
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}

auto init(int a[], int n) -> void
{
	for(auto i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}

auto main() -> int
{
	auto n = ask_user_for_integer("Podaj n: ");
	int a[100] = {};
	init(a, n);
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
