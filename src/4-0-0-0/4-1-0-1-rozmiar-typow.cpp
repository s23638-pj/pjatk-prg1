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
	std::cout << "char: " << sizeof(char) << std::endl;
        std::cout << "int: " << sizeof(int) << std::endl;
        std::cout << "unit16_t: " << sizeof(uint16_t) << std::endl;
        std::cout << "unit32_t: " << sizeof(uint32_t) << std::endl;
        std::cout << "unsigned: " << sizeof(unsigned) << std::endl;
        std::cout << "long: " << sizeof(long) << std::endl;
        std::cout << "float: " << sizeof(float) << std::endl;
        std::cout << "double: " << sizeof(double) << std::endl;
        std::cout << "string: " << sizeof(std::string) << std::endl;

	return 0;
}
