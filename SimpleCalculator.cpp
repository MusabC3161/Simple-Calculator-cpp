#include <iostream>

using namespace std;

int main() {

	char op; // The operator that app is going to use
	double num1, num2;
	cout << "Enter the Operator (+, -, *, /) : ";
	cin >> op; // Get the operator from user

	cout << "Enter the first number : ";
	cin >> num1; // Get the first number from user

	cout << "Enter the second number : ";
	cin >> num2; // Get the second number from user

	switch (op) // Switch between operators according to the input
	{
	case '+':
		cout << num1 << " + " << num2 << " = " << (num1 + num2);
		break;

	case '-':
		cout << num1 << " - " << num2 << " = " << (num1 - num2);
		break;

	case '*':
		cout << num1 << " * " << num2 << " = " << (num1 * num2);
		break;

	case '/':
		if (num2 != 0.0) {
			cout << num1 << " / " << num2 << " = " << (num1 / num2);
		}
		else {
			cout << "Divided by Zero!";
		}
		break;
	default:
		cout << op + " is an invalid operator!";
		break;
	}

	return 0;
}