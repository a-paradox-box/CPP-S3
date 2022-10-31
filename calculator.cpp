#include <iostream>

int main()
{
	int a, b;
	int result = 0;
	char op;
	std::cout << "Enter the first number: ";
	std::cin >> a;
	std::cout << "choose the operator (+, -, /, *): ";
	std::cin >> op;
	std::cout << "Enter the second number: ";
	std::cin >> b;
	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	}
	std::cout << "Result: " << result << std::endl;
}
