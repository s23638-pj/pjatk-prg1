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
	auto b = ask_user_for_integer("Podaj b: ");

	for(auto i = 0; i < b; i++)
	{
		for(auto j = 0; j < a; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}
