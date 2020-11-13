#include <iostream>

auto main(int, char* argv[]) -> int
{
        auto a = std::stoi( argv[1] );
	int n;
	for (n = 1; n < a; ++n)
	{
		if ( n % 3 == 0 && n % 5 != 0) std::cout << n << " Fizz \n";
		if ( n % 5 == 0 && n % 3 != 0) std::cout << n << " Buzz \n";
		if ( n % 15 == 0) std::cout << n << " FizzBuzz \n";
	}
        return 0;
}


