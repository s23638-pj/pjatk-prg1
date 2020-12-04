#include <iostream>

auto main(int, char* argv[]) -> int
{
<<<<<<< HEAD
        auto const a = std::stoi( argv[1] );
	for (auto n = 1; n <= a; n++)
=======
        auto a = std::stoi( argv[1] );
	int n;
	for (n = 1; n <= a; ++n)
>>>>>>> 09840e73b964850c7d773b83d777cc731076f82f
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


