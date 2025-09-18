/* Tshegofasto Tshwale          24355224 */

#include "opcalc.h"
#include "addCalc.h"
#include "subCalc.h"
#include "mulCalc.h"
#include "divCalc.h"

opCalc &opCalc::instance(){

    static opCalc calculation;
    return calculation;
}

operation *opCalc::create(const QString &symb) const {

    // this will handle what each operation will do when encountered
    // addition
    if(symb == "+"){
        return new addCalc();
    }

    // subtraction
    if(symb == "-"){
        return new subCalc();
    }

    // multiplication
    if(symb == "*"){
        return new mulCalc();
    }

    // division
    if(symb == "/"){
        return new divCalc();
    }

    // else
    return nullptr;

}
