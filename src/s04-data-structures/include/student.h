
#ifndef S23638_STUDENT_H
#define S23638_STUDENT_H

#include <iostream>

namespace s23638 {
    struct Student {

        std::string const imie;
        std::string const nazwisko;
        std::string const index;
        int semestr;
        double srednia;

        Student(std::string, 
                std::string, 
                std::string, 
                int, 
                double);

        auto display_student() const -> std::string;
    };
}

#endif
