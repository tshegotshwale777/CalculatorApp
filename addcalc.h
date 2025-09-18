/* Tshegofasto Tshwale          24355224 */

#ifndef ADDCALC_H
#define ADDCALC_H
#include "operation.h"

class addCalc : public operation {

    public:
        double calculate(double x, double y) const override;
};

#endif // ADDCALC_H
