#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

auto main(int argc, char* argv[]) -> int
{
        auto args = std::vector<std::string>{};
	std::copy_n(argv, argc, std::back_inserter(args));
	//auto w = 0;

	for (auto const& each : args) {
		std::cout << each << "\n";
		//w += args;
		std::cout << w << "\nn";
	}

	return 0;
}
