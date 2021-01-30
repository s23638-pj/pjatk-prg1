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

auto amin(int a[], int n) -> void
{
	auto min = a[0];
	for(auto i = 0; i < n; i++)
	{
		 if(min > a[i]) min = a[i];
	}
	std::cout << min;
}

auto main() -> int
{
	auto n = ask_user_for_integer("Podaj n: ");
	int a[10] = { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
	amin(a, n);
/*	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
*/	std::cout << std::endl;
	return 0;
}
