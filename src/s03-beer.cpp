#include <iostream>

auto main(int, char* argv[]) -> int
{
        auto initial_number_of_bottles = std::stoi( argv[1] );
        for ( auto i = initial_number_of_bottles; 1 <= i; i-- )
        {
                std::cout << i <<" bottles of beer on the wall, " << i << " bottles of beer \n";
		std::cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall \n\n";
       	}
	std::cout << "No more bottles on the wall, no more bottles of beer. \n";
	std::cout << "Go to store and buy some more, " << initial_number_of_bottles << " bottles on the wall...\n";
        return 0;
}


