#include <iostream>

auto main(int, char* argv[]) -> int
{
        auto a = std::stoi( argv[1] );
        int i;
        for ( i = a; 1 <= i; i-- )
        {
                std::cout << i <<" bottles of beer on the wall, " << i << " bottles of beer \n";
		std::cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall \n\n";
       	}
	std::cout << "No more bottles on the wall, no more bottles of beer. \n";
	std::cout << "Go to store and buy some more, " << a << " bottles on the wall... \n";
        return 0;
}


