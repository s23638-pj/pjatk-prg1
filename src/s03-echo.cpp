#include <iostream>

auto main(int, char* argv[]) -> int
{
//        auto a = std::stoi( argv[1] );
	int i;
	for ( i = 1; i < 100; i++)
	{
		std::cout << std::stoi( argv[i] ) << " ";
	}
        return 0;
}
