#include "Application.h"


#include <iostream>

Application::Application() : m_Running(true), m_Operand1(0.0), m_Operand2(0.0)
{
}

void Application::PrintMenu()
{
	std::cout << "Calculator Menu:\n";
	std::cout << "1. Addition\n";
	std::cout << "2. Subtraction\n";
	std::cout << "3. Multiplication\n";
	std::cout << "4. Division\n";
	std::cout << "5. Exit\n";
	std::cout << "Enter you choice: ";
}

void Application::Calculate()
{
	int choice = 0;
	std::cin >> choice;

	m_Action = static_cast<Action>(choice);

	if (m_Action == Action::Exit) {
		m_Running = false;
		return;
	}

	std::cout << "Enter first operand" << std::endl;
	std::cin >> m_Operand1;
	std::cout << "Enter second operand" << std::endl;
	std::cin >> m_Operand2;

	double result = 0;

	switch (m_Action)
	{
	case Action::Add:
		result = m_Calculator.Add(m_Operand1, m_Operand2);
		break;
	case Action::Subtract:
		result = m_Calculator.Subtract(m_Operand1, m_Operand2);
		break;
	case Action::Multiply:
		result = m_Calculator.Multiply(m_Operand1, m_Operand2);
		break;
	case Action::Divide:
		result = m_Calculator.Divide(m_Operand1, m_Operand2);
		break;
	case Action::Exit:
		break;
	default:
		std::cout << "Invalid choice" << std::endl;
		return;
	}

	if (std::isnan(result))
		std::cerr << "Cannot divide by zero" << std::endl;
	else {
		std::cout << result << std::endl;
	}
}

void Application::Run()
{
	while(m_Running){
		PrintMenu();
		Calculate();
	}
}
