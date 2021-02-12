#include <iostream>

auto main(int argc, char* argv[]) -> int
{
	auto const x = std::stoi(argv[1]);
	for (auto i = 2; i < argc; ++i) {
		auto const y = std::stoi(argv[i]);

		if(x > y)	{std::cout << x << " > " << y;}
		else if(x < y)	{std::cout << x << " < " << y;}
		else		{std::cout << x << " = " << y;}
	}
	std::cout << std::endl;
	return 0;
}
