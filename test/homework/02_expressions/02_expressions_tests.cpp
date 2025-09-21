#include <cassert>
#include <cmath>
#include "hwexpressions.h"

int main() {
    auto nearly = [](double a, double b) {
        return std::fabs(a - b) < 1e-9;
    };

    {
        double meal = 20.0;
        double expected_tax = 20.0 * 0.0675; 
        assert(nearly(hw::get_sales_tax_amount(meal), expected_tax));
    }

    {
        double meal = 20.0;
        double tip_rate = 0.15;
        double expected_tip = 20.0 * 0.15; 
        assert(nearly(hw::get_tip_amount(meal, tip_rate), expected_tip));
    }

    {
        assert(hw::get_sales_tax_amount(0.0) == 0.0);
        assert(hw::get_tip_amount(0.0, 0.20) == 0.0);
    }

    {
        double meal = 13.99;
        assert(nearly(hw::get_sales_tax_amount(meal), 13.99 * 0.0675));
    }

    return 0; 
}

