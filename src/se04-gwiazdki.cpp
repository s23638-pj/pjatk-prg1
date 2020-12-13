#include <iostream>

auto main() -> int
{
	for (auto i = 1; i <= 10; i++)
	{
		for (auto j = 1; j <= i; j++)
		{
			std::cout << "*";
		}
	std::cout << std::endl;
	}
	return 0;
}


