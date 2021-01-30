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

auto init(int a[], int n, int start) -> void
{
	for(auto i = 0; i < n; i++)
	{
		a[i] = start;
		start++;
	}
}

auto main() -> int
{
	auto n = ask_user_for_integer("Podaj n: ");
	auto start = ask_user_for_integer("Podaj start: ");
	int a[100] = {};
	init(a, n, start);
	for(auto i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
