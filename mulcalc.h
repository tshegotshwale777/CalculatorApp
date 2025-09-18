/* Tshegofasto Tshwale          24355224 */

#ifndef MULCALC_H
#define MULCALC_H
#include "operation.h"

class mulCalc : public operation {

    public:
    double calculate(double x, double y) const override;
};

#endif // MULCALC_H
