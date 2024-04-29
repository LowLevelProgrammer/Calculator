#pragma once

#include "Calculator.h"

enum class Action { Add = 1, Subtract, Multiply, Divide, Exit };

class Application
{
public:
	Application();
	void PrintMenu();
	void Calculate();
	void Run();
private:
	Calculator m_Calculator;
	double m_Operand1, m_Operand2;
	Action m_Action;
	bool m_Running;
};

