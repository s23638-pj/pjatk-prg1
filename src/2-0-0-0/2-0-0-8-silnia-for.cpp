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
	auto liczba = ask_user_for_integer("Podaj liczbę: ");
	auto silnia = 1;

	for(auto i = liczba; i > 1; i--)
	{
		silnia *= i;
	}

	std::cout << liczba << "! = " << silnia << "\n";


	return 0;
}
