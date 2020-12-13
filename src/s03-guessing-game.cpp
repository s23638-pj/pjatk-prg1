#include <iostream>
#include <random>

auto ask_user_for_integer(std::string prompt) -> int
{
	std::cout << prompt << "guess:";
	auto a = std::string{};
	std::getline(std::cin, a);
	return std::stoi(a);
}

auto main() -> int
{
	auto a = 0;
	std::random_device rd;
	std::uniform_int_distribution<int> d100 (1, 100);
	auto const b = d100(rd);
	do
	{
		a = ask_user_for_integer("");

		if( a < b )
		{
			std::cout << "number too small \n";
		}
		if( a > b )
		{
			std::cout << "number too big \n";
		}
	} while( a != b );
	std::cout << "just right! \n";
        return 0;
}


