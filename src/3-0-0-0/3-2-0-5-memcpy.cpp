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
	const char *src = "Hello World!";
    char dest[6];
    std::cout << "Źródło: " << src <<std::endl;
    memcpy(dest, src, 5);
    std::cout << "Cel: " << dest << std::endl;
    return 0;
}
