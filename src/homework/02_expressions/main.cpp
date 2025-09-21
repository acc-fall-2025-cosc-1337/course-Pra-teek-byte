//write include statements
#include <iostream>
#include <iomanip>
#include <limits>
#include "hwexpressions.h"

//write namespace using statement for cout

int main() {
    double meal_amount = 0.0;
    double tip_percent = 0.0;

    std::cout << "Enter meal amount (e.g., 20.50): ";
    if (!(std::cin >> meal_amount)) {
        std::cerr << "Invalid meal amount input.\n";
        return 1;
    }

    std::cout << "Enter tip percentage as a whole number (e.g., enter 15 for 15%): ";
    if (!(std::cin >> tip_percent)) {
        std::cerr << "Invalid tip percentage input.\n";
        return 1;
    }

    double tip_rate = tip_percent / 100.0;

    double sales_tax = hw::get_sales_tax_amount(meal_amount);
    double tip_amount = hw::get_tip_amount(meal_amount, tip_rate);
    double total = meal_amount + sales_tax + tip_amount;

    std::cout << std::fixed << std::setprecision(2) << "\nReceipt:\n";
    std::cout << std::left;
    std::cout << "  Meal Amount:    " << std::right << std::setw(8) << meal_amount << "\n";
    std::cout << "  Sales Tax:      " << std::right << std::setw(8) << sales_tax << "\n";
    std::cout << "  Tip Amount:     " << std::right << std::setw(8) << tip_amount << "\n";
    std::cout << "  Total:          " << std::right << std::setw(8) << total << "\n";

    return 0;
}


