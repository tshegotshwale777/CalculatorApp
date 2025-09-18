/* Tshegofatso Tshwale          24355224 */

#include <QApplication>
#include <QDebug>
#include "calculator.h"
#include "opcalc.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent) // constructor
{
    setupUI();
}

Calculator::~Calculator() {} // destructor

// now we work on the UI
void Calculator::setupUI(){

    QWidget *cntrl = new QWidget(this);
    QVBoxLayout *mainView = new QVBoxLayout(cntrl);

    // here we deal with the user inputs into the calculator and their display
    val1 = new QDoubleSpinBox(this);
    val2 = new QDoubleSpinBox(this);

    answerVal = new QLCDNumber(this);
    answerVal->setDigitCount(10);

    // here we will deal with the calculator layout
    QHBoxLayout *buttonView = new QHBoxLayout();
    buttonView->addWidget(add);
    buttonView->addWidget(sub);
    buttonView->addWidget(mltply);
    buttonView->addWidget(clr);

    mainView->addWidget(val1);
    mainView->addWidget(val2);
    mainView->addLayout(buttonView);
    mainView->addWidget(answerVal);


    // the buttons and connecting them to their slots
    add = new QPushButton("+", this);
    sub = new QPushButton("-", this);
    mltply = new QPushButton("*", this);
    div = new QPushButton("/", this);
    clr = new QPushButton("Clear", this);

    connect(add, &QPushButton::clicked, this, &Calculator::clickedOp);
    connect(sub, &QPushButton::clicked, this, &Calculator::clickedOp);
    connect(mltply, &QPushButton::clicked, this, &Calculator::clickedOp);
    connect(div, &QPushButton::clicked, this, &Calculator::clickedOp);
    connect(clr, &QPushButton::clicked, this, &Calculator::clickedClr);

    cntrl->setLayout(mainView);
    setCentralWidget(cntrl);
}

// dealing with what happens when buttons are clicked in our slots (2)
void Calculator::clickedOp(){

    QPushButton *clicked = qobject_cast<QPushButton *>(sender());
    if(!clicked){

        qWarning() << "sender() is null";
        return; // if the operator isn't clicked, do nothing
    }

    double x = val1 ? val1->value() : 0.0;
    double y = val2 ? val2->value() : 0.0;
    QString calc = clicked->text();

    auto *calculation = opCalc::instance().create(calc);
    if(!calculation){
        // if there is nothing to claculate
        qWarning() << "Cannot calculate!";
        return;
    }

    double ans = calculation->calculate(x, y);
    answerVal->display(ans);
    delete calculation;


}

// dealing with what happens when the clear button is pressed
void Calculator::clickedClr(){

    // set the values back to zero val
    val1->setValue(0.0);
    val2->setValue(0.0);

    // show the result after clearing
    answerVal->display(0.0);
}
