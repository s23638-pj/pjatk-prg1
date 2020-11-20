#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	if (argc == 0) return 1;
	//int i = 1;
	std::string n = "-n";
	std::string r = "-r";
	std::string l = "-l";
	if (argv[1] == n)
	{
		for (int i = 2; i <= argc; i++)
       		{
               	 	std::cout << argv[i] << ", ";
	        }
	}

	if (argv[1] == r)
	{
		for (int i = argc; i >= 2; i--)
		{
			std::cout << argc;
			std::cout << argv[i] << ", ";
		}
		std::cout << "\n";
	}

        if (argv[1] == l)
        {
                for (int i = 2; i <= argc; i++)
                {
                        std::cout << argv[i] << ", \n";
                }
        }


	if (argv[1] != n && argv[1] != r && argv[1] != l)
	{
		for (int i = 1; i <= argc; i++)
		{
			std::cout << argv[i] << ", ";
		}
		std::cout << "\n";
	}
	return 0;
}
