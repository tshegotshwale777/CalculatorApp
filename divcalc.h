/* Tshegofasto Tshwale          24355224 */

#ifndef DIVCALC_H
#define DIVCALC_H
#include "operation.h"

class divCalc : public operation {

    public:
    double calculate(double x, double y) const override;
};

#endif // DIVCALC_H
