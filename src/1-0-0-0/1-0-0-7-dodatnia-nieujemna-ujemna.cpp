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

	if(a > 0) { std::cout << "1"; }
	else if (a < 0) { std::cout << "-1"; }
	else { std::cout << "0"; }
	std::cout << "\n";
	return 0;
}
