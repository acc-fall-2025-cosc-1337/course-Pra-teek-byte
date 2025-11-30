#include <iostream>
#include "decisions.h"

int main()
{
    std::cout << "MAIN MENU\n\n";
    std::cout << "1 - Letter grade using if\n";
    std::cout << "2 - Letter grade using switch\n";
    std::cout << "3 - Exit\n\n";
    std::cout << "Enter option: ";

    int option;
    if (!(std::cin >> option)) { std::cout << "Invalid input\n"; return 1; }

    if (option == 1 || option == 2)
    {
        std::cout << "Enter numerical grade (0-100): ";
        int grade;
        if (!(std::cin >> grade)) { std::cout << "Invalid input\n"; return 1; }
        if (grade < 0 || grade > 100) { std::cout << "Number out of range.\n"; return 0; }

        if (option == 1)
            std::cout << "Letter grade: " << get_letter_grade_using_if(grade) << '\n';
        else
            std::cout << "Letter grade: " << get_letter_grade_using_switch(grade) << '\n';
    }
    else if (option == 3)
    {
        std::cout << "Exiting program.\n";
    }
    else
    {
        std::cout << "Invalid option.\n";
    }
    return 0;
}
