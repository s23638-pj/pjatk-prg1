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

auto print(std::string const &a) -> void
{
//	std::string ad = std::to_string(*ap);
	std::cout << &a << " = " << a << std::endl;
}

auto main() -> int
{
//	std::string const a = "Hello, World!";
//	auto ap = &a;
	print("Hello, World!");
//	std::cout << ap << std::endl;
	return 0;
}
