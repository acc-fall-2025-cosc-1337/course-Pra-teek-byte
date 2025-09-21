#ifndef HWEXPRESSIONS_H
#define HWEXPRESSIONS_H

namespace hw {

    inline const double tax_rate = 0.0675;
    double get_sales_tax_amount(double meal_amount);
    double get_tip_amount(double meal_amount, double tip_rate);
}

#endif 





