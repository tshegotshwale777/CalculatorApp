/* Tshegofasto Tshwale          24355224 */

#ifndef OPERATION_H
#define OPERATION_H

class operation {
    public:

        virtual ~operation() = default;
        virtual double calculate(double x, double y) const = 0;

};

#endif // OPERATION_H
