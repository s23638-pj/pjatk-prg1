#include <iostream>

auto main(int argc, char* argv[]) -> int
{
	for(auto i = 2; i < argc; i++)
	{
      		if(std::stoi(argv[1]) > std::stoi(argv[i])) { std::cout << std::stoi(argv[1]) << " > " << std::stoi(argv[i]); }
      		else if (std::stoi(argv[1]) < std::stoi(argv[i])) { std::cout << std::stoi(argv[1]) << " < " << std::stoi(argv[i]); }
      		else { std::cout << std::stoi(argv[1]) << " == " << std::stoi(argv[i]); }

		std::cout << "\n";
	}

	return 0;
}
