#include <iostream>
#include <string.h>

auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt.empty()) {
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}

using byte = unsigned char;

void* memfrob(void* s, size_t hide) {
    byte* p = (byte*)s;
    byte t = (byte)42;
   
    while (hide--)
    {
        *p = *p ^ t;
        p++;
    }
    return s;
}

auto main() -> int
{
	char text[] = "Hello World!";
    size_t hide = ask_user_for_integer("Ile znaków zamaskować: ");
    std::cout << "Przed memfrob: " << text <<std::endl;
    memfrob(&text, hide);
    std::cout << "Po memfrob: " << text << std::endl;
    return 0;
}
