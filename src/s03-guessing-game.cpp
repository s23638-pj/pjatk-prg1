#include <iostream>
#include <cstdlib>
#include <ctime>

auto main() -> int
{
	srand( time( NULL ) );
	auto a = 0;
	auto b = ( std::rand() % 100 ) + 1;
	do
	{
		std::cout << "guess: ";
		std::cin >> a;

		if( a < b ) std::cout << "number too small \n";
		if( a > b ) std::cout << "number too big \n";
	} while( a != b );
	std::cout << "just right! \n";
        return 0;
}


