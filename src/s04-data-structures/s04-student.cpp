#include <s23638/student.h>
#include <iostream>
#include <sstream>

s23638::Student::Student(std::string imie,
                         std::string nazwisko,
                         std::string index,
                         int semestr,
                         double srednia)
        : imie{imie}
        , nazwisko{nazwisko}
        , index{index}
        , semestr{semestr}
        , srednia{srednia}
{}

auto s23638::Student::display_student() const -> std::string
{
    auto out = std::ostringstream{};
    out << "Imie: " << imie << "\n"
        << "Nazwisko: " << nazwisko << "\n"
        << "Numer indeksu: " << index << "\n"
        << "Semestr: " << semestr << "\n"
        << "Średnia: " << srednia << "\n";

    return out.str();
}

auto main() -> int
{
    auto student = s23638::Student{"Wiktor", "Krieger", "s23638", 1, 0};
    std::cout << student.display_student();
    return 0;
}
