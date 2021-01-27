#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt.empty()) {
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}

bool czy_pierwsza(int a)
{
	if(a<2)
		return false;

	for(auto i=2; i*i <= a; i++)
	{
		if(a%i==0) { return false; }
	}
	return true;
}


auto main() -> int
{
	auto a = ask_user_for_integer("Podaj a: ");
	auto suma = 0;

	if(czy_pierwsza(a))
	{
		std::cout << "Liczba " << a << " jest pierwsza\n";

		while(a>2)
		{
			if(czy_pierwsza(a))	{ suma += a; }
			a--;
		}
		std::cout << suma << "\n";
	}
        else    { std::cout << "Liczba " << a << " nie jest pierwsza\n"; }

	return 0;
}
