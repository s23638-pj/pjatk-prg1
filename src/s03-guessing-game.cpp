#include <iostream>
#include <random>
<<<<<<< HEAD

auto ask_user_for_integer(std::string prompt) -> int
{
	std::cout << prompt << "guess:";
=======
/*
auto ask_user_for_integer(std::string) -> int
{
>>>>>>> a458242eaddd01f92ac980d390d1171d108d0940
	auto a = std::string{};
	std::getline(std::cin, a);
	return std::stoi(a);
}
<<<<<<< HEAD

=======
*/
>>>>>>> a458242eaddd01f92ac980d390d1171d108d0940
auto main() -> int
{
	auto a = 0;
	std::random_device rd;
	std::uniform_int_distribution<int> d100 (1, 100);
	auto const b = d100(rd);
	do
	{
<<<<<<< HEAD
		auto const a = ask_user_for_integer("");
=======
		std::cout << "guess: ";
		//auto a = ask_user_for_integer;
		std::cin >> a;
>>>>>>> a458242eaddd01f92ac980d390d1171d108d0940

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


