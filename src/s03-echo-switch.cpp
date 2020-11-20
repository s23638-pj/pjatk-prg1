#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
        if (argc == 0) return 1;
        //int i = 1;
        std::string n = "-n";
        std::string r = "-r";
        switch (argv[1])
        {
        case n:
        //      if (argv[1] == n)
        //      {
                        for (int i = 2; i <= argc; i++)
                        {
                                std::cout << argv[i] << ", ";
                        }
                break;
        //      }
        case r:
        break;
        deafault:
                for (int i = 2; i <= argc; i++)
                {
                        std::cout << argv[i] << ", " << std::endl;
                }
                break;
        }
	return 0;
}


