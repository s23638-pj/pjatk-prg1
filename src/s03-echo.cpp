#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    auto const option_1 = std::string(argv[1]);	//tworzenie zmiennych które pozwolą oddzielić parametry od argumentów
    auto const option_2 = std::string(argv[2]);

    	if (option_1 == std::string("-n"))	//jeżeli pierwszy argument jest równy "-n", to nie drukować znaku nowej linii na końcu programu
	{
        	for (int i = 2; i < argc; i++)
		{
            		std::cout << argv[i] << " ";
        	}
	}
	else if (option_1 == std::string("-l"))	//jeżeli pierwszy argument jest równy "-l", to wydrukować argumenty po jednym na linię
	{
        	for (int i = 2; i < argc; i++)
		{
            		std::cout << argv[i] << " " << std::endl;
        	}
    	}

	else if (option_1 == std::string("-r"))
	{
        	if (option_2 == std::string("-l"))
//jeżeli pierwszy argument jest równy "-r" i drugi argument jest równy "-l", to wydrukować argumenty po jednym na linię w odwrotnej kolejności
		{
            		for (int i = argc - 1; i >= 3; i--)
			{
                		std::cout << argv[i] << std::endl;
           		}
        	}

		else if (option_2 == std::string("-n"))
//jeżeli pierwszy argument jest równy "-r" i drugi argument jest równy "-n", to wydrukować argumenty w odwrotnej kolejności i nie drukować znaku nowej linii
		{
            		for (int i = argc - 1; i >= 3; i--)
			{
                		std::cout << argv[i] << " ";
           		}
        	}
		else
//jeżeli pierwszy argument jest równy "-r" i drugi argument jest inny od "-l" i "-n", to tylko wydrukować argumenty w odwrotnej kolejności
		{
            		for (int i = argc - 1; i >= 2; i--)
			{
                		std::cout << argv[i] << " ";
            		}
            		std::cout << std::endl;
        	}
    	}
	else	//jeżeli pierwszy i drugi argument są inne od "-r", "-l", "-n", to wydrukować w bez modyfikcji
	{
        	for (int i = 1; i < argc; i++)
		{
            		std::cout << argv[i] << " ";
        	}
        	std::cout << std::endl;
    	}
    	return 0;
}
