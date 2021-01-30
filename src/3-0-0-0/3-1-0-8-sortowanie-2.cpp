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

auto asort_desc(int a[], int n) -> void
{
	for(auto i = 0; i < n; i++)
	{
		for(auto j = 0; j < n - 1; j++)
		if(a[j]<a[j+1])
		std::swap(a[j], a[j+1]);
	}
}

auto main() -> int
{
	auto n = ask_user_for_integer("Podaj n: ");
	int a[10] = { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
	asort_desc(a, n);
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
