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

	for(auto i = 1; i <= a; i++)
	{
		std::cout << "*";
	}

	std::cout << "\n";

	for(auto i = 0; i < a - 2; i++)
	{
		std::cout << "*";

		for(auto j = 1; j <= a - 2; j++)
		{
			std::cout << " ";
		}
		std::cout << "*\n";
	}

	for(auto i = 1; i <= a; i++)
	{
		std::cout << "*";
	}
	std::cout << "\n";

	return 0;
}
