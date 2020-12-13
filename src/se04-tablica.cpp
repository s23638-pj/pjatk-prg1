#include <iostream>
#include <array>

auto main() -> int
{
	std::array<int, 8> tab;
	auto j = 0;
	for(auto i = 1; i <= 16; i++)
	{
		if (i % 2 == 0)
		{
			tab[j] = i;
			std::cout << tab[j] << "\n";
        		j++;
		}
	}
	return 0;
}


