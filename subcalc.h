/* Tshegofasto Tshwale          24355224 */

#ifndef SUBCALC_H
#define SUBCALC_H
#include "operation.h"

class subCalc : public operation {

    public:
    double calculate(double x, double y) const override;
};

#endif // SUBCALC_H
