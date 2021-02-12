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

auto swap(int &a, int &b) -> void
{
	auto tmp = &a;
	&a = &b;
	&b = tmp;
}

auto main() -> int
{
	auto const a = int{42};
        auto const b = int{64};

	std::cout << a << " " << b << "\n";

	swap(&a,&b);

	std::cout << a << " " << b << "\n";
	return 0;
}
