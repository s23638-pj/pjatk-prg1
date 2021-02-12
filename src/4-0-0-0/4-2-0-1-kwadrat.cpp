
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

struct kwadrat
{
	float bok;

	auto area(float bok) const -> float
	{
		return bok*bok;
	}
};
/*
auto area() const -> float
{

}
*/
auto main() -> int
{
	//auto n = ask_user_for_integer("Podaj n: ");
	kwadrat k1;
	k1.bok = 4;
	k1.area(bok);
	std::cout << k1.bok << std::endl;
	return 0;
}
