#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y, int procent)
{
	switch (oper
)
	{
	case '+':
		return x + y;

	case '-':
		return x - y;

	case '*':
		return x * y;

	case '/':
		return x / y;

	case '%':
		return x * y / procent;
	default:
		return 0.0;
	}
}
