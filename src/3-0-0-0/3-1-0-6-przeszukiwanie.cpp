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

auto search(int a[], int n, int needle) -> void
{
//	auto obecnosc = 0;
	auto i = n;
	for(i = n; i >= 0; i--)
	{
		if(needle == a[i])
		{
			std::cout << i;
//			obecnosc = 1;
		}
	}
	std::cout << i;
//	if (obecnosc == 1) { i  }
}

auto main() -> int
{
	auto n = ask_user_for_integer("Podaj n: ");
	int a[10] = { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
	auto needle = ask_user_for_integer("Podaj needle: ");
	search(a, n, needle);
/*	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
*/	std::cout << std::endl;
	return 0;
}
