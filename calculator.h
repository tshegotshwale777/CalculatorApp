/* Tshegofatso Tshwale          24355224 */

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QLCDNumber>
#include <QVBoxLayout>
#include <QHBoxLayout> //find out their differences

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr); //constructor
    ~Calculator(); //destructor

private:

    // we need 2 spin boxes for our different input values
    QDoubleSpinBox *val1;
    QDoubleSpinBox *val2;

    // an lcd number to show the result
    QLCDNumber *answerVal;

    // the buttons on the calculator
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mltply;
    QPushButton *div;
    QPushButton *clr;

    // this sets up our UI
    void setupUI();

private slots:

    // connect the buttons to their slots
    void clickedOp(); // all the operator buttons will share this slot
    void clickedClr();

};
#endif // CALCULATOR_H
