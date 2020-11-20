#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int
{
	auto const dobrehaslo = std::string{ argv[1] };
	auto haslo = std::string{};

	do
	{
		std::cout << "password: ";
		std::getline(std::cin, haslo);
	} while (haslo != dobrehaslo);

	std::cout << "ok!\n";
	return 0;
}
