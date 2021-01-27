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
//	auto n = "Nie jest pierwsza";
//	auto p = "Jest pierwsza";

	if(a<2) { std::cout << "Nie jest pierwsza\n"; return 0;}

	for(auto i = 2; i * i <= a; i++)
	{
		if(a%i==0) { std::cout << "Nie jest pierwsza\n"; return 0; }
	}

	std::cout << "Jest pierwsza\n";


	return 0;
}
