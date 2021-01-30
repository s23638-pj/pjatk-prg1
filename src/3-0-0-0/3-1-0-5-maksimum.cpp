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

auto amax(int a[], int n) -> void
{
	auto max = a[0];
	for(auto i = 0; i < n; i++)
	{
		 if(max < a[i]) max = a[i];
	}
	std::cout << max;
}

auto main() -> int
{
	auto n = ask_user_for_integer("Podaj n: ");
	int a[10] = { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
	amax(a, n);
/*	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
*/	std::cout << std::endl;
	return 0;
}
