/* Tshegofasto Tshwale          24355224 */

#include <limits>
#include "divcalc.h"

double divCalc::calculate(double x, double y) const {

    // the division calculation

    // this handles division by 0
    if(y == 0.0){
        return std::numeric_limits<double>::infinity();
    }
    return (x / y);
}
