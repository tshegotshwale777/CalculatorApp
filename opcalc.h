/* Tshegofasto Tshwale          24355224 */

#ifndef OPCALC_H
#define OPCALC_H
#include "operation.h"
#include <QString>

class opCalc {

    public:

        static opCalc &instance(); // this is our singleton
        operation* create(const QString &symb) const;

    private:

        opCalc() = default;
        opCalc(const opCalc&) = delete;
        opCalc &operator =(const opCalc&) = delete;
};

#endif // OPCALC_H
