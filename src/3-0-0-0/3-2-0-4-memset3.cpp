#include <iostream>
#include <string.h>

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
	char hello[] = "Hello World";
    std::cout << "Przed memset: " << hello << std::endl;
	auto const n = ask_user_for_integer("Ile pierwszych znaków usunąć: ");
	memset(hello, '-', n);
	std::cout << "Po memset: " << hello << std::endl;

	return 0;
}
