#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

auto main(int argc, char* argv[]) -> int
{

	auto args = std::vector<std::string>{};
	std::copy(argc + 1, argv + argc, std::back_inserter(args));

	auto separator = std::string{" "};
	auto terminator = std::string{"\n"};
	auto reverse_order = false;

	auto print_form = size_t{0};
	for (auto const each : args)
	{
		if(each == "-n")
		{
			terminator = "";
		}
		else if (each == "-l")
		{
			separator = "\n";
		}
		else if (each == "-r")
		{
			reverse_order = true;
		}
		else
		{
			break;
		}
		++print_from;
	}

	auto print_these = std::vector<std::string>{};
	std::copy(args.begin() + print_from, args.end(), std::back_inserter(print_these));

	if(reverse_order)
	{
		std::reverse(print_these.begin(), print_these.end());
	}

	for (auto const each : print_these)
	{
		std::cout << each << separator;
	}
	std::cout << terminator;

/*

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
	}*/
	return 0;
}
