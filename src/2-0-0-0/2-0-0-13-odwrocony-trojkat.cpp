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

auto main() -> int
{
	auto a = ask_user_for_integer("Podaj a: ");

	for(auto i = a; i > 0; i--)
	{
		for(auto j = i; j > 0; j--)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}
