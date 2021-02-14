#include <iostream>
#include <string.h>

void memrev( void* s, size_t n)
{
    unsigned char* b = (unsigned char*) s;
    unsigned char* e = b + n;

    while ((b != e) && (b + 1 != e))
    {
        unsigned char c = *b;
        --e;
        *b = *e;
        *e = c;
        ++b;
    }
}
auto main() -> int
{
	char text[] = "Hello World!";
    size_t n = 12;
    std::cout << "Przed memrev: " << text <<std::endl;
    memrev(&text, n);
    std::cout << "Po memrev: " << text << std::endl;
    return 0;
}
