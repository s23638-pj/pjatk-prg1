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
	auto limit = ask_user_for_integer("Podaj limit: ");
	auto dzielnik = ask_user_for_integer("Podal dzilenik: ");
	auto suma = 0;

	for(auto i = 0; i <= limit; i++)
	{
		if(i % dzielnik == 0) { suma += i; }
	}

	std::cout << "Suma liczb podzielnych wynosi: " << suma << "\n";


	return 0;
}
