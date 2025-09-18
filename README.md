# CalculatorApp
In this exercise, you will design a simple calculator with four basic operations, namely addition, subtraction, multiplication, and division. Implementation of this simple calculator should separate the code for the user interface and mathematical operations.

The Operation class hierarchy contains the logic for performing various mathematical operations. A concrete class in this hierarchy represents one mathematical operation, which is performed in its compute() function that returns the result of an operation.

Implement the Factory method design pattern using one factory class named OperationFactory so that an instance of a class in the Operation class hierarchy can be created based on the requested operation (+, -, *, /). Additionally, OperationFactory should also be an implementation of Singleton.
The user interface for the calculator should make use of five QPushbuttons, two QDoubleSpinBoxes, and one QLCDNumber.

QDoubleSpinBoxes allow the user to enter numbers, and QLCDNumber is for displaying the result of the calculation. To use the calculator, the user should first enter two numbers and then select one of the four (+, -, *, /) buttons. The result of the operation is displayed in QLCDNumber. The button clear is used to clear QDoubleSpinBoxes and QLCDNumber.

Note the following:
• The signals emitted by the four buttons (+, -, *, /) should be handled in a single slot.
• The user interface code should make use of the Operation class hierarchy to get the result of the requested operation.
• Handle overflow in QLCDNumber display appropriately.
• Handle division by 0 appropriately.
