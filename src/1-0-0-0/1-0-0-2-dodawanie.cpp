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

	auto c = a + b;

	std::cout << "Suma wynosi: " << c << "\n";

	return 0;
}
