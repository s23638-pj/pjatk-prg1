#include <iostream>

auto main(int, char* argv[]) -> int
{
        auto const a = std::stoi( argv[1] );
	for (auto n = 1; n <= a; n++)
	{
		std::cout << n << " ";
		if ( n % 3 == 0 )
		{
			std::cout << "Fizz";
		}

		if ( n % 5 == 0 )
		{
			std::cout << "Buzz";
		}

		std::cout << "\n";
	}

        return 0;
}


