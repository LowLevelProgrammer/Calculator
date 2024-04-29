#include "Calculator.h"
#include <limits>

Calculator::Calculator()
{
}

double Calculator::Add(double operand1, double operand2)
{
	return operand1 + operand2;
}

double Calculator::Subtract(double operand1, double operand2)
{
	return operand1 - operand2;
}

double Calculator::Multiply(double operand1, double operand2)
{
	return operand1 * operand2;
}

double Calculator::Divide(double operand1, double operand2)
{
	if (operand2 == 0)
		return std::numeric_limits<double>::quiet_NaN();
	return operand1 / operand2;
}
