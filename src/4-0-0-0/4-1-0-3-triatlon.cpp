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

enum dyscypliny
{
	bieganie,
	jezdziectwo,
	kolarstwo,
	plywanie,
	rzut_oszczepem,
	skok_w_dal,
	wspinaczka,
	zapasy
};

auto main() -> int
{
	dyscypliny triathlon = bieganie, kolarstwo, plywanie;
	std::cout << triathlon << std::endl;
	return 0;
}
