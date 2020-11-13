#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int
{
        auto liczba = std::stoi(argv[1]);
        for (int i = liczba; i >= 0; --i) {
                std::cout << i <<"... \n";
        }
        return 0;
}



